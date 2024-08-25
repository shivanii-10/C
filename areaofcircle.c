#include<stdio.h>
int main(){
    int num1;
    printf("Enter Radius of the circle Here: ");
    scanf("%d", &num1);
    int num2;
    num2 = 3.14*num1*num1;
    printf("%d", num2);
    return 0;
}