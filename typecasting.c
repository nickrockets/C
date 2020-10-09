#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float avgProfit;
    int PumpkinPrice = 10;
    int sales = 59;
    int daysWorked = 7;

    avgProfit = ( (float)PumpkinPrice * (float)sales ) / (float)daysWorked;
    printf("Average daily profit: $%.2f \n", avgProfit);
  

    return 0;
}