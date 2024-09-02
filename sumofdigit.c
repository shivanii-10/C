#include <stdio.h>

int main() {
    int n; 
    int sum = 0; 
    int digit;

    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

   
    if (n < 10000 || n > 99999) {
        printf(" enter a 5-digit number.\n");
        return 1;
    }

    
    while (n > 0) {
        digit = n % 10;  
        sum += digit;         
        n /= 10;   
    }      
    printf("The sum of the digits is: %d\n", sum);

    return 0;
} 