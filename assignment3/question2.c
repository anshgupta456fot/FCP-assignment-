#include <stdio.h>

// Function to calculate the length of a string
int string_length(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }

    return count;
}

// Function to reverse a string
void string_reverse(char str[]) {
    int length = string_length(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; ++i, --j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter the first string: ");
    gets(str1);

    //Copying the contents of str1 in str3

    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }

    str3[i] = '\0';

    printf("Enter the second string: ");
    gets(str2);

    int len1 = string_length(str1);
    printf("Length of the first string: %d\n", len1);

    int len2 = string_length(str2);
    printf("Length of the second string: %d\n", len2);

    //for conactenating the strings

    for(int i = 0; i<len2; i++)
    {
        str1[len1+i] = str2[i];
    }
    printf("Concatenated string is %s\n",str1);

    //for comparison of two strings
    int flag = 0;
    for(int i = 0; str3[i]!='\0' && str2[i]!='\0'; i++)
    {
        if(str3[i]!=str2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    printf("Strings are not same\n");

    else
    printf("Strings are same\n");

    // For reversing the strings
    string_reverse(str3);
    printf("Reversed first string: %s\n", str3);

    string_reverse(str2);
    printf("Reversed second string: %s\n", str2);
    return 0;
}
