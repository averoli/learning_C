#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void suffle_cards(char *cards)
{
    int length = strlen(cards);
    for (int i = length - 1; i > 0; i--)
    {
        int j = rand() % (i + 1); // Генерация случайного индекса от 0 до i
        char temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
}

int main()
{
    char cards[] = "JQK";
    printf("You have 3 cards: %s\n", cards);
    suffle_cards(cards);
    printf("You have new 3 cards: %s\n", cards);
    return 0;
}