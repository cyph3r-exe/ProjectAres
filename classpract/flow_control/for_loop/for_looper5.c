#include <stdio.h>

int main() {
    int i,j,k;
    k = 5;

    for (i = 0; i <= k; i++)
    {   
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }    
}