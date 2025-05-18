// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int i,j;
// for(i=1;i<=5;i++)
// {
//     printf("%d\n",i);
// }
//     for(j=i;j<=4;j++)

// for(i=1;i<=5;i++)
// {
//     for(j=i;j<=4;j++)

// {
//     printf("%d\n",j);
// }
//  return 0;
// }
// }


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,prime=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
       
        if(n%i==0){
             prime=0;
            break;
        }}

    
    if (prime)
        printf("The number is prime");
    else
        printf("The number is composite");

 return 0;
}
