#include<stdio.h>
int main()
{
    int x;
    printf ("value of x is\n");
    scanf ("%d", & x);

    if(x%2==0){
        printf("x is an even no.");
    }
    else{
        printf("x is an odd number");
    }


}