//in this piece of code, we'll be retrying how to print multiple variables by first taking
//from the user

/*
Functions used in this chapter.
printf()
scanf()
*/

// #include <stdio.h>
// int main() {
//     int a;
//     char b[] = "Enter a number: ";
//     char sentence[] = "Enter a sentence: ";
//     int c;
//     char d[] = "";
//     printf("%s", b); // Enter a number: 
//     scanf("%d", &a); // Store the number in 'a' 

//     printf("%s", sentence); // Enter a sentence: 
//     scanf("%s", &d); // Store a sentence in 'd'
    
//     printf("%s", b); // Enter a number: 
//     scanf("%d", &c); // Store a number in 'c'
//     printf("%d %s %d", a, d, c);
//     return 0;
// }

//? ------------------ FAILED TRIAL -----------------

#include <stdio.h>
int main() {
    int a;
    char sentence_1[] = "Enter a number: "; // Number will be stored in a
    printf("%s", sentence_1);
    scanf("%d", &a);
}