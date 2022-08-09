//Write a program to calculate simple interest for a given P = 4000, T = 2, R = 5.5. (I = P * T * R / 100)
#include <stdio.h>

int main(void)
{
    float principle,time,rate,SI;

    printf("Enter principle (amount): ");
    scanf("%f",&principle);

    printf("Enter time: ");
    scanf("%f",&time);

    printf("Enter rate: ");
    scanf("%f",&rate);

    SI = (principle*time*rate) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}
