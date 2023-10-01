// Program to relate two integers using =, > or < symbol

#include <stdio.h>

int main() {

    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b) {

        printf("Both the numbers are equal.");

    } else if ( a > b) {

        printf("%d is greater than %d", a,b);

    } else {

        printf("%d is greater than %d", b,a);
    }
    
    return 0;
}