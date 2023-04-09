#include<stdio.h>

int main()

{
 
    while(1)
    {
        int psw;
        scanf("%d", &psw);
        if(psw == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}