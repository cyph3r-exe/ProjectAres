/*
Let the user enter any number. 
If the user enters an even number, 
then print the number is even. 
if the user enters an odd number, 
then print the number is odd
*/

#include <stdio.h>

int main() {
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if ( a % 2 == 0) {
        printf("The given number %d is even", a);
    }
    else {
        printf("The given number %d is odd.",a);
    };
}
