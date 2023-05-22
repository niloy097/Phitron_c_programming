#include<stdio.h>

int x= 500;//Global var can be access from anywhere in block of program
void fun()
{
    //int s = 100;
    printf("%d\n", x);
}

int main()
{
    int s = 200;
    printf("%d\n", x);
    fun();
    printf("%d", s);
}