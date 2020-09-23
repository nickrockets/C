#include <stdio.h>

int main(void)
{
    float avgProfit;
    int priceofPumpkin = 19;
    int sales = 20;
    int workDays = 6;

    avgProfit = ((float)priceofPumpkin * (float)sales) / (float)workDays;
    printf("Average daily profit: $%.2f\n", avgProfit);

    return 0;
}