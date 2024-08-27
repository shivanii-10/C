#include<stdio.h>
int main() {
    int x;
    printf("numerical grade of the student is");
    scanf("%d" , & x);
    if(x>=91 && x<=100){
        printf("grade is A");
    }
    else if(x>=81 && x<= 90){
     printf("grade is B+");
    }
    else if(x>=71 && x<=80){
     printf("grade id B");
    }
    else if(x>=61 && x<=70){
     printf("grade id C");
    }
    else if(x>=40 && x<= 60){
    printf("grade id D");
    }
    else {
        printf("fail.");
    }
}