//if money ==  somthing-->
/*#include<stdio.h>

int main()

{

    int taka;
    printf("Entter the amount: ");
    scanf("%d", &taka);
    if(taka == 100)
    {
        printf("Burger khabo\n");
    }
    else
    {
        printf("Saradin kichi khabo nh\n");
    }

    return 0;
}*/

#include<stdio.h>

int main()

{

    int taka;
    printf("Enter the amount:");
    scanf("%d", &taka);
    if(taka >= 100)
    {
        printf("Burger khabo\n");
    }
    else
    {
        printf("Burger khabo nh!\n");
    }

    return 0;
}