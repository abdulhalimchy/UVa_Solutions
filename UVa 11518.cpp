#include<bits/stdc++.h>
#define LL long long
#define MX 10005
#define pb push_back
using namespace std;

int node;
char color[MX];
vector<int> v[MX];

void List(int edge)
{
    int a, b;
    memset(color, 'W', sizeof(color));
    for(int i=0; i<MX; i++)
        v[i].clear();
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].pb(b);
    }
}

void DFS(int source)
{
    color[source]='B';
    vector <int> :: iterator i;
    for(i=v[source].begin(); i!=v[source].end(); i++)
    {
        if(color[*i]=='W')
        {
            DFS(*i);
        }
    }
}
int main()
{
    int edge, t, z, ara[MX];
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d", &node);
        scanf("%d", &edge);
        scanf("%d", &z);
        List(edge);
        for(int j=1; j<=z; j++)
            scanf("%d", &ara[j]);
        for(int j=1; j<=z; j++)
        {
            if(color[ara[j]]=='W')
            {
                DFS(ara[j]);
            }
        }
        int fall=0;
        for(int j=1; j<=node; j++)
        {
            if(color[j]!='W')
                fall++;
        }
        cout << fall << endl;
    }
    return 0;
}
