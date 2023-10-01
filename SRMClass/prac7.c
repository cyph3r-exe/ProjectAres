// #include <stdio.h>

// int main() {
//     int i;
//     i = 37;

//     if (i%2 == 0)
//     {
//         printf("This is not a prime number: ");
//     } else if (i %3 == 0)
//     {
//         printf("This is not a prime number: ");
//     } else if (i % 5 == 0)
//     {
//         printf("This is not a prime number: ");
//     } else if (i % 7 == 0)
//     {
//         printf("This is not a prime number: ");
//     } else if (i % 11 == 0)
//     {
//         printf("This is not a prime number: ");
//     } else
//     {
//         printf("This is a prime number");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() 
// {
// int a;
// printf("enter the value");
// scanf("%d",&a);
// if(a%2==0)
// {
//     printf("it is not a prime no.");
// } else if(a%3==0)
// {
//     printf("it is not a prime no.");
// } else if (a%5==0)
// {
//     printf("it is not a prime no.");
// } else if (a%7==0)
// {
//     printf("it is not a prime no.");
// } else if (a%11==0)
// {
//     printf("it is not a prime no.");
// }else 
// {
//     printf("it is a prime no.");
// }
// return 0;
// }

#include <stdio.h>
    int main()
    {
    int num;
    printf("enter your number");
    scanf("%d",&num);
    
    if (num % 2 == 0){
        printf("this is not a prime number");
    } else if (num % 3 == 0){
        printf("this is not a prime number"); 
    }else if (num % 5 == 0){
        printf("this is not a prime number");
    } else if (num % 7 == 0) {
        printf("this is not a prime number");
    } else if (num % 11 ==0){
        printf("this is not a prime number");
    }
    return 0;
}