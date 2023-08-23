#include <stdio.h>

void fortune_cookies(char msg[])
{
    printf("Message is: %s\n", msg);
    printf("The message length is: %p bites\n", msg);
}

int main()
{
    char quote[] = "Cookies fill you up!";

    fortune_cookies(quote);

    return 0;
}