#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);


    //  for(i=1;i<=n;i++)
    // {
    //     printf("%d\n",i);
    //     sum=sum+i;
    // }  



    // while(i<=n)
//     {
//         printf("%d\n",i);
//         sum=sum+i;
//         i++;
//     }
//     printf("The sum Number is %d",sum);
//     return 0;
// }


do {
    printf("%d\n",i);
    sum=sum+i;
    i++;
    }while(i<=n);
    printf("The sum is %d",sum);

    
}