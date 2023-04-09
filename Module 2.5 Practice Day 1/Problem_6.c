#include<stdio.h>
#include<windows.h>

int main()

{

    int h, m, s;
    printf("Set clock: ");
    scanf("%d %d %d", &h, &m, &s);
    if(h >12 || m>59 || s > 59)
    {
        printf("This time dosen't exist\n");
    }
    else
    {
        while (1)
        {
             s++;
             if(s>59)
             {
                m++;
                s = 1;
             }
             if(m>59)
             {
                h++;
                m = 1;
             }
            if(h>12)
            {
                h = 1;
            }
            printf("Clock: %02d:%02d:%02d\n", h, m, s);
            Sleep(1000);
            system("cls");

        }
    }
    

    return 0;
}