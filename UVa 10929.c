#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002];
    int sum, i;
    while(gets(s))
    {
        sum=0;
        if(s[0]=='0' && strlen(s)==1)
            break;
        for(i=0; i<strlen(s); i++)
        {
            sum=sum*10+(s[i]-48);
            sum=sum%11;
        }
        if(sum==0)
            printf("%s is a multiple of 11.\n", s);
        else
            printf("%s is not a multiple of 11.\n", s);
    }
    return 0;
}

