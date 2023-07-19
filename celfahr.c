#include <stdio.h>

// print Celsius-Fahrenheit table
// for cel = -20, 0, ... 160

int main()
{
    float cel, fahr;
    float lower, upper, step;

    lower = -20;
    upper = 160;
    step = 20;
    
    cel = lower;

    printf("Celsius Fahrenheit\n");

    while (cel <= upper)
    {
        fahr = 32.0 + (9.0 / 5.0) * cel;
        printf("%6.0f \t%3.1f\n", cel, fahr);
        cel = cel + 20;
    }
}