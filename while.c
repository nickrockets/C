//Program to find the amount in a month
#include <stdio.h>

int main()
{   int day = 1;
    float amount = .01;

    while(day <= 31){
        printf("Day:%d \t Amount:$%.2f \n", day, amount);
        amount *= 2;
        day++;
    }

    return 0;
}
