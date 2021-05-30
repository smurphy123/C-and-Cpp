#include <stdio.h>

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; // &a = address of a

    printf("Adress of p is %d\n", p);
    printf("Value at p is %d\n", *p);

    int b = 20;
    *p = b; // Will the address in p change to point b?
    printf("Address of P is %d\n", p);
    printf("Value at p is %d\n", *p);
}