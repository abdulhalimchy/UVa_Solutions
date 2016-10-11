#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n, i, j;
    char s[500];
    while(scanf("%d", &n)==1)
    {
        int ara[27]={0};
        getchar();
        for(i=0; i<n; i++)
        {
            gets(s);
            for(j=0; s[j]!=NULL; j++)
            {
                if(s[j]>='a' && s[j]<='z')
                    s[j]=toupper(s[j]);
                if(s[j]>='A' && s[j]<='Z')
                {
                    ara[s[j]-64]++;
                }
            }
        }
        int index, max;
        for(i=1; i<=26; i++)
        {
            max=0;
            for(j=1; j<=26; j++)
            {
                if(ara[j]>max)
                {
                    max=ara[j];
                    index=j;
                }

            }
            if(max!=0)
            {
                printf("%c %d\n", index+64, ara[index]);
                ara[index]=0;
            }
        }
    }
    return 0;
}
