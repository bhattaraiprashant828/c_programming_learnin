// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,fibo,i,a=1,b=1,c;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("%d\t",a);
//     printf("%d\t",b);
//     for(i=0;i<n-2;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d\t",c);
        
//     }
//     printf("\nThe %dth term is %d",n,c);

// }


#include<stdio.h>
#include<conio.h>
int fibonac(int n)
{
    if (n==1 || n==2)
        return 1;
    else
        return fibonac(n-1)+fibonac(n-2);
}
int main()
{
    int n,fibo;
    printf("Enter the number: ");
    scanf("%d",&n);
    fibo=fibonac(n);
    printf("\nThe %dth term is %d",n,fibo);

}



