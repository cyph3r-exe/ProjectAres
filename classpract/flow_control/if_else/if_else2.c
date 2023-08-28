/*
We have to check whether a person has good credit score or not
and a good income as well. if he has both good income and a good credit score then he will be eligible 
to apply for a loan.
*/ 

#include <stdio.h>

int main() {
    int credit_score;
    int monthly_income;

    printf("Enter your credit score: ");
    scanf("%d", &credit_score);

    printf("Enter your monthly score: ");
    scanf("%d", &monthly_income);

    if (credit_score > 500) {
        if (monthly_income > 100000) {
            printf("You are eligible for a loan.");
        }
    } else
    {
        printf("You are not eligible for a loan.");
    }
    
}