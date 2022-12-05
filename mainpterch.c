#include <stdio.h>
#include <stdlib.h>

void isPalindrome(char* string)
{
    char *ptr, *rev;
 
    ptr = string;
 
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
 
    for (rev = string; ptr >= rev;) {
        if (*ptr == *rev) {
            --ptr;
            rev++;
        }
        else
            break;
    }
 
    if (rev > ptr)
        printf("String is Palindrome");
    else
        printf("String is not a Palindrome");
}
 
int main()
{
    char str[30] ;
    printf("write a word : ");
    gets(str);
 
    isPalindrome(str);
 
    return 0;
}
