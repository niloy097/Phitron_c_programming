#include<stdio.h>

int main()

{

    char namr[100]; //Niloy\0e
    fgets(namr, 6, stdin);
    // namr[6] = '\0'; //Null termination
    printf("%s", namr);


    return 0;
}