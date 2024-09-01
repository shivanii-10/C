#include<stdio.h>
int main(){
    int x;
    printf("enter the no.");
    scanf("%d" , & x);

    if( x%2==0){
        printf("the number %d is a prime number\n" , x) ;
    }

    else{
        printf("the number %d is not a prime number\n", x );
    }


}