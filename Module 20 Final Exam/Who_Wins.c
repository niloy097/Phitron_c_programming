#include<stdio.h>

int main()

{

    int n;
    int w_tiger = 0;
    int w_pathan = 0;
    scanf("%d", &n);
    while(n--)
    {
        int x1, y1;
        scanf("%d %d", &x1, &y1);
        if(x1 > y1)
        {
            w_tiger++;
        }
        else if(x1 < y1)
        {
            w_pathan++;
        }
        else
        {
            continue;
        }
    }
    if(w_tiger > w_pathan)
    {
        printf("Tiger\n");
    }
    else if(w_tiger < w_pathan)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}