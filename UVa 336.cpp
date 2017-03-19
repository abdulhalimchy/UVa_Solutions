#include<bits/stdc++.h>
#define LL long long
#define MX 35
using namespace std;

int node, dist[MX];
vector<int> v[MX];
map<LL, int> check;
int tt;
void List(int node)
{
    check.clear();
    tt=1;
    for(int i=0; i<MX; i++)
        v[i].clear();
    for(int i=1; i<=node; i++)
    {
        LL a, b;
        scanf("%lld %lld", &a, &b);
        if(check[a]==0)
        {
            check[a]=tt;
            tt++;
        }
        if(check[b]==0)
        {
            check[b]=tt;
            tt++;
        }
        v[check[a]].push_back(check[b]);
        v[check[b]].push_back(check[a]);
    }
}

void BFS(int source)
{
    memset(dist, -1, sizeof(dist));
    queue<int> Q;
    Q.push(source);
    dist[source]=0;
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        vector<int> ::iterator k;
        for(k=v[x].begin(); k!=v[x].end(); k++)
        {
            if(dist[*k]==-1)
            {
                Q.push(*k);
                dist[*k]=dist[x]+1;
            }
        }
    }
}

int main()
{
    int i=1;
    while(scanf("%d", &node)==1)
    {
        if(node==0)
            break;
        List(node);
        LL a, b;
        while(scanf("%lld %lld", &a, &b)==2)
        {
            int co=0;
            if(a==0 && b==0)
                break;
            BFS(check[a]);
            for(int i=1; i<tt; i++)
            {
                if(dist[i]>b || dist[i]==-1)
                    co++;
            }
            printf("Case %d: %d nodes not reachable from node %lld with TTL = %lld.\n", i, co, a, b);
            i++;
        }
    }
    return 0;
}
