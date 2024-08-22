#include<stdio.h>
int main()
{
     int p;
    int r;
    int t;
    printf("enter the value of numbers\n");
    scanf ( "%d", & p );
    scanf ( "%d", & r );
    scanf ( "%d", & t );
    float s;
    s=p*r*t/100;
    printf("The simple interest is: %f\n", s);
}
