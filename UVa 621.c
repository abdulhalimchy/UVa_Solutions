#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, len;
    scanf("%d", &n);
    char s[1000];
    for(i=0; i<n; i++)
    {
        scanf("%s", s);
        len=strlen(s);
        if(s[len-1]=='5' && s[len-2]=='3')
            printf("-\n");
        else if(s[0]=='9' && s[len-1]=='4')
            printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            printf("?\n");
        else
            printf("+\n");
    }
    return 0;
}
