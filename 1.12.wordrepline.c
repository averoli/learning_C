#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c, state;
    char nw;
    nw = " ";
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            nw = c;
            printf("%s\n", nw);
        }
    }

    return 0;
}