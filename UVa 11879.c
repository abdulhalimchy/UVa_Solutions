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
            sum=sum%17;
        }
        if(sum==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
