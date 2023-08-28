/*
loda behenchod dekhle jo bhi code kara hai
*/

#include <stdio.h>

int main() {
    int physics;
    int chemistry;
    int maths;
    int english;
    int computer;

    printf("Enter marks for physics: ");
    scanf("%d", &physics);

    printf("Enter marks for chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks for maths: ");
    scanf("%d", &maths);

    printf("Enter marks for english: ");
    scanf("%d", &english);

    printf("Enter marks for computer: ");
    scanf("%d", &computer);

    float final = (physics + chemistry + maths + english + computer) / 5;
    printf("The final percentage is: %f");

    return 0;
}