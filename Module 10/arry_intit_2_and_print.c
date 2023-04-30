#include<stdio.h>

int main()

{

   /* char a[] = "Niloy";
    printf("%s", a); */

    //this will not work properly

    //solution is null character '\0'

    char a[6] = "Niloy\0"; //or char a[] = "Niloy";// or char a[6] = "Niloy" (automatically null will associate)
    printf("%s", a);

    return 0;
}