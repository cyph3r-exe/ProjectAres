#include <stdio.h>

int main () {
    int i;
    printf("enter your number: ");
    scanf("%d",&i);
    if (i % 2 == 0)
    {
        printf("This is even");
    } else
    {
        printf("This is odd");
    }
    return 0;
}