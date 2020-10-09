#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if ( age >= 18){
        
    printf("Welcome to the website! \n");
    
    }
    if ( age < 18){
        
    printf("Access denied. \n");
    
    }

    return 0;
}