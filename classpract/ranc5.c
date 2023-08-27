//Trying to take input from the user as a sentence. 
#include <stdio.h>

int main() {
    char a[] = "Enter a sentence: ";
    char sentence[] = "";
    printf("%s", a);
    scanf("%s", &sentence);
    printf("%s", sentence);
    return 0;
}