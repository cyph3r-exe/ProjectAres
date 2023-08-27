#include <stdio.h>
#include <stdlib.h>

int main() {
    char characterNamep[] = "Johnny dogs";
    int age = 35;
    //%s is used to insert a string inside another string while printing in C. 
    printf("There once was a man named %s \n", characterNamep);

    //%d is used to insert an integer inside a string while printing in C. 
    printf("His age was %d \n", age);
    return 0;
}