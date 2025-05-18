#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,prime=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0){
            prime=0;
            break;
        }
    }

    if (prime)
        printf("The number is prime");
    else
        printf("The number is composite");

 return 0;
}
