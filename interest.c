#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float balance = 1000.0;

    balance *= 2.2;
    printf("Balance: %f \n", balance);
    balance *= 2.2;
    printf("Balance: %f \n", balance);
    balance *= 2.2;
    printf("Balance: %f \n", balance);

    return 0;
}