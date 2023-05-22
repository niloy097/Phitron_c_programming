#include<stdio.h>

int main()

{

    int x = 100;
    int *ptr;
    ptr =  &x;
    printf("Val of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Val of of ptr: %p\n", ptr);
    //printf("Ptr memory size: %d\n", sizeof(ptr)); // size --> 4

    return 0;
}