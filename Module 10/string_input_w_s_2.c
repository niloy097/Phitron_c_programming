#include<stdio.h>
#include<string.h>

int main()

{

    //fgets(str name, size, stdin); //cant take "enter" input
    char name[15]; //13 character// 1 for null //1 for enter
    fgets(name, 15, stdin);
    printf("%s", name);

    return 0;
}