#include <stdio.h>
// print Fahrenheit-Celsius table
// for fahr = 0, 20, ... 300
int main()
{
    float farh, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    printf("Fahrenheit Celsius\n");
    while (farh <= upper)
    {
        celsius = (5 / 9.0) * (farh - 32.0);
        printf("%3.0f \t%6.1f\n", farh, celsius);
        farh = farh + 20;
    }
}