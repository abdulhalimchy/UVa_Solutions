#include<bits/stdc++.h>
#define LL long long
using namespace std;
int ara[125], h, w, G[105][105];

void DFS(int i, int j, int n)
{
    G[i][j]=0;
    if(G[i+1][j]!=0 && G[i+1][j]==n)
        DFS(i+1, j, G[i+1][j]);

    if(G[i-1][j]!=0 && G[i-1][j]==n)
        DFS(i-1, j, G[i-1][j]);

    if(G[i][j+1]!=0 && G[i][j+1]==n)
        DFS(i, j+1, G[i][j+1]);

    if(G[i][j-1]!=0 && G[i][j-1]==n)
        DFS(i, j-1, G[i][j-1]);
}
int main()
{
    int t, test=1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &h, &w);
        string s[105];
        for(int i=0; i<h; i++)
            cin >> s[i];
        memset(G, 0, sizeof(G[0][0])*105*105);
        for(int i=0; i<h; i++)
        {
            for(int j=0; s[i][j]!=NULL; j++)
            {
                G[i+1][j+1]=s[i][j];
            }
        }
        for(int i=95; i<=123; i++)
            ara[i]=0;
        for(int i=1; i<=h; i++)
        {
            for(int j=1; j<=w; j++)
            {
                if(G[i][j]!=0)
                {
                    ara[G[i][j]]++;
                    DFS(i, j, G[i][j]);
                }
            }
        }
        printf("World #%d", test);
        for(int j=1; j<=26; j++)
        {
            int mx=0, temp=0;
            for(int i=97; i<=122; i++)
            {
                if(ara[i]>mx)
                {
                    mx=ara[i];
                    temp=i;
                }
            }
            ara[temp]=0;
            if(mx!=0)
            {
                printf("\n%c: %d", temp, mx);
            }
        }
        printf("\n");
        test++;
    }
    return 0;
}
