#include <stdio.h>
#include <stdlib.h>

int display(int a, int *ptr, int **pptr)
{
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
}

int new_pointer(int **p)
{
    static int b = 90;

    *p = &b;
}

int main()
{

    int a = 55;
    int *ptr;
    int **pptr;

    ptr = &a;
    pptr = &ptr;

    new_pointer(&ptr);
    display(a, ptr, pptr);
}