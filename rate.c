#include<stdio.h>
int main(){
    int num1;
    printf("Enter Principal Amount Here: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter Number of Years Here, For Rate of 10 Percent Yearly: ");
    scanf("%d", &num2);

    int num3;
    num3 = num1/10;
    int num4;
    num4 = num2*num3;
    int num5;
    num5 = num1+ num4;
    printf("%d", num5);
    return 0;
}