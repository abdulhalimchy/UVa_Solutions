#include<bits/stdc++.h>
#define MX 105
using namespace std;
int G[MX][MX];
void DFS(int i, int j)
{
    G[i][j]=2;
    if(G[i-1][j-1]==1)
    {
        DFS(i-1, j-1);
    }
    if(G[i-1][j]==1)
    {
        DFS(i-1, j);
    }
    if(G[i-1][j+1]==1)
    {
        DFS(i-1, j+1);
    }
    if(G[i][j-1]==1)
    {
        DFS(i, j-1);
    }
    if(G[i][j+1]==1)
    {
        DFS(i, j+1);
    }
    if(G[i+1][j-1]==1)
    {
        DFS(i+1, j-1);
    }
    if(G[i+1][j+1]==1)
    {
        DFS(i+1, j+1);
    }
    if(G[i+1][j]==1)
    {
        DFS(i+1, j);
    }
}
int main()
{
    int m, n;
    string s[MX];
    while(scanf("%d %d", &m, &n)==2)
    {
        if(m==0)
            break;
        int cnt=0;
        for(int i=0; i<m; i++)
            cin >> s[i];
        memset(G, 0,sizeof(G[0][0])*MX*MX);
        for(int i=0; i<m; i++)
        {
            for(int j=0; s[i][j]!=NULL; j++)
            {
                if(s[i][j]=='@')
                    G[i+1][j+1]=1;
            }
        }
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(G[i][j]==1)
                {
                    cnt++;
                    DFS(i, j);
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
