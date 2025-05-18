#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p=1,i;
    printf("Enter a number :\n");
    scanf("%d",&n)
    for(i=2;i<n/2;i++)
        {
            if(n%i==0) {
            p=0;
            break;
            }
        }
        if(p)
             printf("Prime");
        else
             printf("not prime");
 return 0;
}
