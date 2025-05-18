#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);

}

// #include<stdio.h>
// #include<conio.h>

// int fact(int num)
// {
//     if (num==1 || num==0)
//         return 1;
//     else
//         return num*fact(num-1);
// }
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int factorial = fact(n);
//     printf("The factorial of %d is %d",n,factorial);

// }