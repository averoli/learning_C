#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char card_name[3];
    puts("Enter a card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
        default:
        val = atoi(card_name);
    }

    // if (card_name[0] == 'K')
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'Q')
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'J')
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'A')
    // {
    //     val = 11;
    // }
    // else
    // {
    //     val = atoi(card_name);
    // }

    if ((val >= 3) && (val <= 6))
    {
        puts("Counter increased");
    }
    else if (val == 10)
    {
        puts("Counter decresed");
    }
    // printf("Card value: %i\0", val);
    return 0;
}