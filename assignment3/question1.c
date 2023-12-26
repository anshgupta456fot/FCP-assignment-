#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[100], concat[200];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);
    int result = strcmp(str1, str2); 
    if (result == 0) 
        printf("Strings are same.\n");
    else
        printf("String are not same.\n");
    strcpy(concat, str1); 
    strcat(concat, str2); 

    printf("Concatenated string: %s\n", concat);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 == len2) 
        printf("Both strings have the same length.\n");
    else if (len1 < len2)
        printf("String 1 is shorter than String 2.\n");
    else 
        printf("String 1 is longer than String 2.\n");
}