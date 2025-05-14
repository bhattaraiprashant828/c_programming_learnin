#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("Ennter days of a week 1-7\n");
    scanf("%d",&day);
    switch (day)
    {
      case 1:
        printf("Sunday\n");
        break;
      case 2: 
        printf("Monday\n");
        break;
      case 3: 
        printf("Tuesday\n");
        break;
      case 4: 
        printf("Wednesday\n");
        break;
      case 5: 
        printf("Thrusday\n");
        break;
      case 6: 
        printf("Friday\n");
        break;
      case 7: 
        printf("Saturday\n");
        break;
      default : printf("invalid choise");
    
    }
}
