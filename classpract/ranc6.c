// show that the printf() can be used to print
// A statement
// A character
// float number
// multiple outputs

#include <stdio.h>

int main() {
    //Printing a statement
    char statement1[] = "Shaurya is a great girl.";
    printf("%s", statement1);

    //Printing a character
    char character[] = "S";
    printf("%s", character);

    //Printing a float number
    float number1 = 6.82005;
    printf("%f", number1);

    //Printing multiple outputs in the same printf() function.
    printf("%s %s %f", statement1, character, number1);
    return 0;
}