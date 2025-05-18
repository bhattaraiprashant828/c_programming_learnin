// Hello World
#include<stdio.h>
#include<conio.h>
// void printhello();
// void printGoodBye();
// int main()
// {
//     printhello();
//     printGoodBye();
//     return 0;
// }
// void printhello() {
// printf("Hello\n");
// }
// void printGoodBye() {
// printf("GoodBye");

// }



void printNamaste();
void printBonjour();
int main()
{
    char ch;
    printf("enter f for french and i for indian :\n");
    scanf("%c",&ch);
    if(ch== 'i' || ch== 'f')
    printf("Namaste");
    else
    printf("Bonjour");

}


