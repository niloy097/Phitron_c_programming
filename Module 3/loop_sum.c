/*#include<stdio.h>

int main()

{

   long long int i, sum = 0;
    int n;
    printf("Enter the term: ");
    scanf("%d", &n);
    for( i = 1; i<=n; i++)
    {
        sum+=i;
    }
    printf("The sum of the series is: %lld", sum);

    return 0;
}
/*sum of the n'th term of the series = n/2(2a+(n-1)*d)
                                     = n/2(2*1+(n-1)*1) //if a = 1 and d = 1
                                     = n*(n+1)/2 
                                     
                                     */