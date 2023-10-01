/*
Creating the F symbol using for loops
and a list. The output should look 
something like this. 

XXXXX
XX
XXXXX
XX
XX

*/

#include <stdio.h>

int main() {
    int nested[] = {5,2,5,2,2};

    int i,j;

    for ( i = 0; i < sizeof(nested) / sizeof(nested[0]); i++)
    {
        for ( j = 0; j < nested[i]; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    
}