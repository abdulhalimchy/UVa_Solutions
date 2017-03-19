#include<bits/stdc++.h>
#define LL long long
#define mx 50005
using namespace std;

vector<int> v[mx];
int visit[mx], node, cnt, temp;
bool color[mx];

void List()
{
    int a, b;
    for(int i=0; i<mx; i++)
        v[i].clear();
    for(int i=1; i<=node; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
    }
}

void DFS(int source)
{
    visit[source]=temp;
    color[source]=1;
    cnt++;
    vector<int> ::iterator i;
    for(i=v[source].begin(); i!=v[source].end(); i++)
    {
        if(visit[*i]!=temp)
        {
            DFS(*i);
        }
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++)
    {
        int mmx=0, index=0;
        scanf("%d", &node);
        List();
        memset(visit, 0, sizeof(visit));
        memset(color, 0, sizeof(color));
        for(int j=1; j<=node; j++)
        {
            cnt=0, temp=j;
            if(color[j]==0)
            {
                DFS(j);
            }
            if(cnt>mmx)
            {
                mmx=cnt;
                index=j;
            }
        }
        printf("Case %d: %d\n", i, index);
    }
    return 0;
}
