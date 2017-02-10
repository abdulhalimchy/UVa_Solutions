#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105][105];
    int i, r, c, j;
    while(scanf("%d %d", &r, &c)==2)
    {
        if(r==0 && c==0)
            break;
        int co=0, flag;
        memset(s, '\0', sizeof(s));
        for(i=0; i<r; i++)
        {
            scanf("%s", s[i]);
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(s[i][j]=='*')
                {
                    flag=0;
                    if(i>0)
                    {
                        if(s[i-1][j]=='*' || s[i-1][j+1]=='*')
                        {
                            flag=1;
                            continue;
                        }
                    }
                    if(j>0)
                    {
                        if(s[i][j-1]=='*' || s[i+1][j-1]=='*')
                        {
                            flag=1;
                            continue;
                        }
                    }
                    if(j>0 && i>0)
                    {
                        if(s[i-1][j-1]=='*')
                        {
                            flag=1;
                            continue;
                        }
                    }
                    if(s[i+1][j+1]=='*' || s[i][j+1]=='*' || s[i+1][j]=='*')
                    {
                        flag=1;
                        continue;
                    }
                }
                else
                    flag=1;
                if(flag==0)
                    co++;
            }
        }
        printf("%d\n", co);
    }
    return 0;
}
