#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("Value of EOF: %d\n", EOF);
    return 0;
}
