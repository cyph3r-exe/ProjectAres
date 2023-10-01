//! Making of Patterns Part 1

#include <stdio.h>

int main() {
    int i,j,count;
    count = 5;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}