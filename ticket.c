#include <stdio.h>

int main() {
    int age;
    int price;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age < 12) {
        price = 5;
    } else if (age < 18) {
        price = 10;
    } else if (age < 60) {
        price = 20;
    } else {
        price = 15;
    }

    
    printf("The ticket price for age %d is $%d.\n", age, price);

    return 0;
}