#include<stdio.h>
#include<string.h>
int main()
{
    char s[105][105];
    int i=0, j=0, t=0, len=0, k;
    while(gets(s[i]))
    {
        if(len<strlen(s[i]))
            len=strlen(s[i]);
        t++;
        i++;
    }
    for(k=1; k<=len; k++)
    {
        for(i=t-1; i>=0; i--)
        {
            if(j<strlen(s[i]))
            {
                printf("%c", s[i][j]);
            }
            else
                printf(" ");
        }
        printf("\n");
        j++;
    }
    return 0;
}
