//Answer to the question no-4: 

#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]);
int main()

{

    char str[100];
    gets(str);
    int t_s = is_palindrome(str);
    if(t_s == 1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;
}
int is_palindrome(char str[])
{   
    int len = strlen(str);
    char rev_str[len+1];
    for(int i = 0; i <= len; i++)
    {
        rev_str[i] = str[i];
    }
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        int temp = rev_str[j];
        rev_str[i] = rev_str[j];
        rev_str[j] = temp;
        i++;
        j--;
    }

    int flag = 0;
    for(int i = 0; i < strlen(rev_str); i++)
    {
        if(str[i] == rev_str[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}