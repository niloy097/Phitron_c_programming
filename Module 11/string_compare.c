/*

String Compare case---->
1. Every strings character are same and they ends with null character
2, 3. One string can be ends with null character but before characters were same
4. string character mismach(whatever the size is but while comparing one character got mismach)

*/


#include<stdio.h>

int main()

{

    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while(1)
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if(a[i] == '\0')
        {
            printf("A choto\n");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("B choto\n");
            break;
        }
        
        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i] < b[i])
        {
            printf("A choto\n");
            break;
        }
        else
        {
            printf("B choto\n");
            break;
        }
    }

    return 0;
}

//Alternative way-->
/*

#include<stdio.h>
#define true 1
#define false 0

int main()

{

    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while(true)
    {

        if((a[i] == '\0') && (b[i] == '\0'))
        {
            printf("Both string are same\n");
            break;
        }

        if(a[i] == b[i]) 
        {
            
            i++;
        }
        else
        {
            if(a[i] == '\0')
            {
                printf("A is small\n");
                break;
            }
            else if(b[i] == '\0')
            {
                printf("B is small\n");
                break;
            }
            else if(a[i] > b[i])
            {
                printf("B is small\n");
                break;
            }
            else
            {
                printf("A is small\n");
                break;
            }
        }
    }

    return 0;
}

*/