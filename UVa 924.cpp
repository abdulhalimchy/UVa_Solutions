#include<bits/stdc++.h>
#define LL long long
#define MX 2505
using namespace std;
vector<int> v[MX];
int dist[MX], node, t, mx[MX];


void List()
{
    for(int i=1; i<MX; i++)
        v[i].clear();
    int temp;
    for(int i=0; i<node; i++)
    {
        scanf("%d", &t);
        for(int j=1; j<=t; j++)
        {
            scanf("%d", &temp);
            v[i].push_back(temp);
        }
    }
}
void BFS(int source)
{
    dist[source]=0;
    queue<int> Q;
    Q.push(source);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        vector<int> :: iterator it;
        for(it=v[u].begin(); it<v[u].end(); it++)
        {
            if(dist[*it]==-1)
            {
                mx[dist[u]+1]++;
                Q.push(*it);
                dist[*it]=dist[u]+1;
            }
        }

    }

}
int main()
{
    scanf("%d", &node);
    List();
    scanf("%d", &t);
    int temp;
    for(int i=1; i<=t; i++)
    {
        memset(dist, -1, sizeof(dist));
        memset(mx, 0, sizeof(mx));
        scanf("%d", &temp);
        BFS(temp);
        int index, Max=0;
        for(int j=1; j<=node; j++)
        {
            if(mx[j]>Max)
            {
                Max=mx[j];
                index=j;
            }

        }
        if(Max!=0)
            cout << Max << " " << index << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
