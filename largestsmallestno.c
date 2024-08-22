#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("value of three numbers are\n");
    scanf("%d", & a);
    scanf("%d", & b);
    scanf("%d", & c);
    if(a>b && b>c){
        printf("a is the largest of three no. that is %.2d\n", a);
        printf("c is the smallest of three no. that is %.2d\n", c);
    }
    else if (a>c && c>b){
        printf("a is the largest of three no. that is %.2d\n", a);
        printf("b is the smallest of three no. that is %.2d\n", b);
    }
    else if(b>a && a>c){
        printf("b is the largest of three no. that is %.2d\n", b);
        printf("c is the smallest of three no. that is %.2d\n", c);
    }
    else if(b>c && c>a){
        printf("b is the largest of three no. that is %.2d\n", b);
        printf("a is the smallest of three no. that is %.2d\n", a);
    }
    else if(c>a && a>b){
        printf("c is the largest of three no. that is %.2d\n", c);
        printf("b is the smallest of three no. that is %.2d\n", b);
    }
    else if(c>b && b>a){
        printf("c is the largest of three no. that is %.2d\n", c);
        printf("a is the smallest of three no. that is %.2d\n", a);
    }
}