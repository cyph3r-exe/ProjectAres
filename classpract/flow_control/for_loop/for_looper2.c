// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>

int main() {

    int a;
    printf("Enter the number of natural numbers to be added up after 0: ");
    scanf("%d",&a);
    int count = 0;
    static int sum = 0;

    for (count = 0; count < a + 1; count++)
    {
        sum = sum + count;
    }   
    printf("The sum of all the natural numbers upto %d is %d", a, sum);
} 