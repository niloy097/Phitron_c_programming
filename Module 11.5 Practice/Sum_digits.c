#include<stdio.h>
int main()

{

    int n;
    int sum = 0;
    scanf("%d", &n);
    char arr[1000001];
    scanf("%s", arr);
    for(int i = 0; i < n; i++)
    {
        sum = sum + (arr[i] - '0');
    }

    printf("%d\n", sum);
    

    return 0;
}