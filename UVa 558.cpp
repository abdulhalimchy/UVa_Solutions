#include<bits/stdc++.h>
#define LL long long
#define MX 2005
using namespace std;
int n, m, dist[MX];
bool visit[MX];
vector<pair<int, int> > v[MX];
vector<pair<int, int> > ::iterator it;

void graph()
{
    for(int i=0; i<MX; i++)
    {
        dist[i]=INFINITY;
        v[i].clear();
    }
    int x, y, a;
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d %d", &x, &y, &a);
        v[x+1].push_back(make_pair(y+1, a));
    }
}

int bellman(int source)
{
    dist[source]=0;
    for(int u=1; u<=n-1; u++)
    {
        for(int i=1; i<=n; i++)
        {
            for(it=v[i].begin(); it!=v[i].end(); it++)
            {
                if(((it->second)+dist[i])<(dist[it->first]))
                {
                    dist[it->first]=it->second+dist[i];

                }
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(it=v[i].begin(); it<v[i].end(); it++)
        {
            if(it->second+dist[i]<dist[it->first])
            {
                dist[it->first]=it->second+dist[i];
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d %d", &n, &m);
        graph();
        if(bellman(1)==1)
            printf("possible\n");
        else
            printf("not possible\n");
    }
    return 0;
}
