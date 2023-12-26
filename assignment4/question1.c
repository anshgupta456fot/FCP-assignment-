#include <stdio.h>

struct ECEA_Student {
    char name[50];
    int rollNumber;
    char gender;
};

int main(void) 
{
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

    printf("ECE-A Student Data:\n");

    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Gender");

    for (int i = 0; i < 10; ++i) {
        printf("%-20s %-15d %-10c\n", students[i].name, students[i].rollNumber, students[i].gender);
    }
}
