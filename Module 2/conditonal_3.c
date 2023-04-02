#include<stdio.h>

int main()

{

    int tk;
    printf("Enter amount for tour: ");
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox-Bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Then Said Martin jabo\n");
        } 
        else
        {
            printf("Then Ferot chole jabo\n");
        }
        
    }

    else
    {
        printf("Kothao jabo nh\n");
    }
    

    return 0;
}