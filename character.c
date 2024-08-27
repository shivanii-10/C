#include<stdio.h>

int main() {
    char x;
     printf("Enter a character: ");
    scanf("%c", & x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        printf("The character '%c' is a Vowel.\n", x);
        }
        else if ((x >= 'a' && x <= 'z')){
        printf("The character '%c' is a Consonant.\n", x);
    } 
    
    else {
        printf("Invalid input, please enter an alphabetic character.\n");
    }
    return 0;
}
  