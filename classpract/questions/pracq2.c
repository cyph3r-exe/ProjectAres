/*
Write the code to find the Simple Interest. 
Note - All the data i.e., principle amount, rate and time must be entered by the user
*/

#include <stdio.h>

int main() {
    //declaring variables
    int principle_amount;
    int rate; 
    int time; //This will be time in years and not in months or quarters.

    float si_amount = (principle_amount * rate * time) / 100;
    printf("The simple interest on the amount of %s is %f", principle_amount, si_amount);
    
    return 0;
}