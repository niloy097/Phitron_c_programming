
#include <stdio.h>

int main() 
{   int t;
    scanf("%d", &t);
    while(t--)
    {

    
        int num;
        int a;// 112 --> 2 1 1
        
        scanf("%d", &num);
        while(1)
        {
            a = num % 10;
            printf("%d ", a);
            num = num / 10;
            if(num == 0)
            {
                break;
            }
            
        }
        printf("\n");
    }

    return 0;
}