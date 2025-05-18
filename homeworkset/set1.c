//  1.a

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b,peri=0;
//     printf("Enter length and breadth of a rectangle :\n");
//     scanf("%d%d",&a,&b);
//     peri=2*(a+b);
//     printf("The Perimeter of rectangle is %d",peri);
//  return 0;
// }

// 1.b
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float cube;
    printf("Enter a number :\n");
    scanf("%d",&n);
    cube=pow(n,3);

    printf("The cube is %f",cube);
 return 0;
}
