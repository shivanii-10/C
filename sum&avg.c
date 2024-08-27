#include<stdio.h>
int main(){
int x;
int y;
int sum;
float avg;
printf("Enter the first number: "); 
scanf("%d", &x);
printf("Enter the second number: ");
scanf("%d", & y); 
sum= x+y; 
printf("the sum of the nos. is %d\n" , sum); 
avg= sum/2 ;
printf("avg of the nos. is %f", avg); 
return 0;
} 
