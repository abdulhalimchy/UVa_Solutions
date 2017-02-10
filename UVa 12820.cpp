#include<bits/stdc++.h>
using namespace std;
int ara[130];
int main()
{
    int t, cool, i, j, k=1;
    char s[35];
    while(scanf("%d", &t)==1)
    {
        cool=0;
        for(j=1; j<=t; j++)
        {
            memset(ara, 0, sizeof(ara));
            scanf("%s", s);
            set<char> ch;
            set<int> n;
            for(i=0; s[i]!=NULL; i++)
            {
                ara[s[i]]++;
                ch.insert(s[i]);
            }
            for(i=97; i<=122; i++)
            {
                if(ara[i]!=0)
                    n.insert(ara[i]);
            }
            if(ch.size()>1 && ch.size()==n.size())
                cool++;
        }
        printf("Case %d: %d\n", k, cool);
        k++;
    }
    return 0;
}
