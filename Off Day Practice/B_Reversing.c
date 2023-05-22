#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            int a = i - 1;
            int b = 0;
            while(b < a)
            {
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                b++;
                a--;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}