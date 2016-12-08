#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    int t, i, j;
    scanf("%d", &t);
    getchar();
    for(i=1; i<=t; i++)
    {
        while(gets(s))
        {
            if(strlen(s)==0)
                break;
            for(j=0; s[j]!=NULL; j++)
            {
                if(s[j]=='0')
                    s[j]='O';
                else if(s[j]=='1')
                    s[j]='I';
                else if(s[j]=='2')
                    s[j]='Z';
                else if(s[j]=='3')
                    s[j]='E';
                else if(s[j]=='4')
                    s[j]='A';
                else if(s[j]=='5')
                    s[j]='S';
                else if(s[j]=='6')
                    s[j]='G';
                else if(s[j]=='7')
                    s[j]='T';
                else if(s[j]=='8')
                    s[j]='B';
                else if(s[j]=='9')
                    s[j]='P';
                printf("%c", s[j]);
            }
            printf("\n");
        }
        if(i!=t)
            printf("\n");
    }
    return 0;
}

