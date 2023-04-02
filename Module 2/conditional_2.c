#include<stdio.h>

int main()

{

    int tk;
    printf("Enter tk: ");
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("\nBurger khabo\n");
    }
    else if(tk >= 50)
    {
        printf("\nFuchka kahbo\n");
    }
    else if(tk >= 20)
    {
        printf("\nIce Cream khabo\n");
    }
    else 
    {
        printf("\nKhabo nh\n");
    }

    return 0;
}