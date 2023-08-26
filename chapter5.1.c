#include <stdio.h>

int main()
{
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    printf("Ip now points to x: %p\n", ip);
    y = *ip;
    printf("Y now is: %d\n", y);
    *ip = 0;
    printf("Ip now points to: %d\n", *ip);
    ip = &z[0];
    printf("Ip now points to z: %p\n", &ip);
    return 0;
}