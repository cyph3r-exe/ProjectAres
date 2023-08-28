/*
Write the code to find the area of a circle 
The radius must be entered by the user.
*/
#include <stdio.h>

int main() {
    //declaring the variable to store the radius
    int r;

    //prompting user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    //calculating the radius in a given variable
    //note this value will be a float value because pi has 2 decimal values in it. 
    float area = 2 *3.14 * r;
    printf("The area of the circle is: %.2f", area);

    return 0;
}