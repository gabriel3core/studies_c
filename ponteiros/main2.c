#include <stdio.h>
#include <stdlib.h>

void display(int a, int *ptr, int **pptr);

void update(int **pp);

int main(){

    int a = 200;
    int *ptr;
    int **pptr;

    ptr = &a;
    pptr = &ptr;

    update(ptr);
    display(a,ptr,pptr);
     
    *ptr = 400;

    display(a,ptr,pptr);
}

void display(int a, int *ptr, int **pptr){
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
}

void update(int **pp){
    static int b = 100;
    *pp = &b;
}