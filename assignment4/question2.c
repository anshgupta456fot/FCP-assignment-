#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ECEA_Student {
    char name[50];
    int rollNumber;
    char gender;
};

// Function to calculate the checksum of a file
unsigned int calculateChecksum(FILE *file) {
    unsigned int checksum = 0;
    int ch;

    // Calculate checksum by XORing all characters in the file
    while ((ch = fgetc(file)) != EOF) {
        checksum ^= ch;
    }

    return checksum;
}

int main(void)
{
    FILE *fp;

    // 1) Write 1 line about yourself
    fp = fopen("assignment.txt", "a");
    fprintf(fp, "Hello! My name is Kunal.\n");
    fclose(fp);

    // 2) Write ECE-A student data to the file
    struct ECEA_Student students[10] = {
        {"Aarav", 1, 'M'},
        {"Aditi", 2, 'F'},
        {"Aditya", 3, 'M'},
        {"Neha", 4, 'F'},
        {"Rahul", 5, 'M'},
        {"Vidushi", 6, 'F'},
        {"Kunal", 7, 'M'},
        {"Riddhi", 8, 'F'},
        {"Siddharth", 9, 'M'},
        {"Grace", 10, 'F'}
    };

    fp = fopen("assignment.txt", "a");
    fprintf(fp, "\nECE-A Student Data:\n");
    fprintf(fp, "%-20s %-15s %-10s\n", "Name", "Roll Number", "Gender");

    for (int i = 0; i < 10; ++i) {
        fprintf(fp, "%-20s %-15d %-10c\n", students[i].name, students[i].rollNumber, students[i].gender);
    }

    // 3) Append file data with file checksum
    unsigned int checksum = calculateChecksum(fp);
    fprintf(fp, "\nChecksum: %u\n", checksum);

    // 4) Append multiplication table of numbers in the file from 2 to 50
    fprintf(fp, "\nMultiplication Table of Numbers from 2 to 50:\n");
    for (int i = 2; i <= 50; i++) {
        fprintf(fp, "Multiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            fprintf(fp, "%d x %d = %d\n", i, j, i * j);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    fp = fopen("assignment.txt", "r");
    if (fp == NULL)
        printf("File does not exist\n");
    else 
        printf("File exists\n");

    fclose(fp);
}
