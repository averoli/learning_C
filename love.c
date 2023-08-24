#include <stdio.h>

int main (){
int contestants[] = {1, 2, 3};
int *choice = contestants;

char c[] = "How is big?";
char *t = c;

contestants[0] = 2;
contestants[1] = contestants[2];
contestants[2] = *choice;

printf("I am going to choose a candidate: %i\n", contestants[2]);
printf("I am going to choose a candidate: %i\n", *contestants);
printf("Size of t: %p\n", &c);

    return 0;
}