// Q.no. 1

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     float a,b,c,avg;
//     printf("Enter any three numbers :\n");
//     scanf("%f%f%f",&a,&b,&c);
//     avg=(a+b+c)/3;
//     printf("The average is %f",avg);
//  return 0;
// }

// Q.no.2

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character:\n");
//     scanf("%c",&ch);
//     if(ch>='0' && ch<='9')
//         printf("Is a digit");
//     else
//         printf("Is a character");
//     return 0;
// }


// Hello World
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a<b )
        printf("%d is smaller\n",a);
    else
        printf("%d is smaller",b);
    
    return 0;
}
