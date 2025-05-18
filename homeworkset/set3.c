// // // Q.no.1

// // #include<stdio.h>
// // #include<conio.h>
// // #include<math.h>
// // int countDigit(int n)
// // {
// //     int count=0;
// //     while(n!=0)
// //     {
// //         count++;
// //         n/=10;
// //     }
// //     return count;
// // }
// // int main()
// // {
// //     int n,m,rem,sum=0;
// //     printf("Enter a number :\n");
// //     scanf("%d",&n);
// //     m=n;
// //     int digNum=countDigit(m);
// //     while(n!=0)
// //     {
// //     rem=n%10;
// //     sum=sum+rem*rem*rem;
// //     n=n/10;
// //     }
// //     if (m==sum)
// //         printf("The given no is armstrong\n");
// //     else
// //         printf("The given no is not Armstrong\n");

// //     printf("The digit count of %d is %d",m,digNum);
// //     return 0;
// // }




#include <stdio.h>

int main() {
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if number is a whole number and greater than 0
    if ((int)number == number) {
        if(number>0){
            printf("%.2f is a natural number or positive integer.\n", number);
        }
        else{
            printf("%.2f is a negative integer.\n",number);
        }
    } else {
        printf("%.2f is NOT a natural number.\n", number);
    }

    return 0;
}
