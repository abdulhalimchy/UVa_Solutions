#include<bits/stdc++.h>
#define LL long long
#define pb push_back
using namespace std;

int node;
char color[205];
int f=1;
vector<int> v[205];

void List(int edge)
{
    int a, b;
    memset(color, 'W', sizeof(color));
    for(int i=0; i<205; i++)
        v[i].clear();
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].pb(b);
        v[b].pb(a);
    }
}

void DFS(int source)
{
    vector <int> :: iterator i;
    for(i=v[source].begin(); i!=v[source].end(); i++)
    {
        if(color[*i]=='W')
        {
            if(color[source]=='B')
                color[*i]='G';
            else if(color[source]=='G')
                color[*i]='B';
            DFS(*i);
        }
        else if(color[*i]==color[source])
        {
            f=0;
            break;
        }
    }
}
int main()
{
    int edge;
    while(scanf("%d", &node)==1)
    {
        if(node==0)
            break;
        scanf("%d", &edge);
        List(edge);
        color[0]='B';
        f=1;
        DFS(0);
        if(f==0)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");
    }
    return 0;
}
