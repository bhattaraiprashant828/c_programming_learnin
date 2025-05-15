#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch >='A' && ch <= 'Z')
        printf("Upper case \n");
    else if(ch >='a' && ch <='z')
        printf("Lower case");
    else
        printf("Not a English alphabet");
 return 0;
}
