#include<stdio.h>
#include<conio.h>
int main()
{
    int marks ;
    printf("Enter a Marks\n");
    scanf("%d",&marks);
    if(marks < 30)
    {
        printf("Your Grade is C \n");
    }
    else if(marks >= 30 && marks < 70)
    {
        printf("Your Grade is B \n");
    }
    else if(marks >= 70 && marks < 90)
    { 
        printf("Your Grade is A \n");
  
    } 
    else
    printf("Your Grade is A+ \n");
        return 0;
}
