#include<stdio.h>
#include<string.h>

int main()
{
    int t, n, i;
    char s[105];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        scanf("%s", s);
        int j, len=strlen(s), c=0;
        s[len+1]=NULL;
        s[len+2]=NULL;
        for(j=0; j<len; j++)
        {
            if(s[j]=='.' && s[j+1]=='.' && s[j+2]=='.')
            {
                c++;
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]=='#' && s[j+2]=='.')
            {
                c++;
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]=='.' && s[j+2]=='#')
            {
                c++;
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]=='#' && s[j+2]=='#')
            {
                c++;
                j+=2;
            }
             else if(s[j]=='#' && s[j+1]=='#' && s[j+2]=='#')
            {
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]==NULL)
            {

                c++;
            }
            else if(s[j]=='.' && s[j+1]=='.' && s[j+2]==NULL)
            {

                c++;
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]=='#' && s[j+2]==NULL)
            {

                c++;
                j+=2;
            }
            else if(s[j]=='.' && s[j+1]==NULL)
            {

                c++;
            }
        }
        printf("Case %d: %d\n", i, c);
    }
    return 0;
}
