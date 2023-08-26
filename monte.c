#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void suffle_cards(char *cards)
{
    char card_0 = cards[0];
    cards[0] = cards[1];
    cards[1] = cards[2];
    cards[2] = card_0;
}

int main()
{
    char *cards = "JQK";
    printf("You have 3 cards: %s\n", cards);
    suffle_cards(cards);
    printf("You have new 3 cards: %s\n", cards);
    return 0;
}