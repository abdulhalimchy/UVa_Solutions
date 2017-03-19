#include<bits/stdc++.h>
#define MX 105
using namespace std;

int node, start, t, flag=0, q;
char color[MX];
vector<int> v[MX];

void DFS(int source)
{
    color[source]='B';
    for(int i=0; i<v[source].size(); i++)
    {
        if(color[v[source][i]]=='W')
        {
            DFS(v[source][i]);
        }
        if(v[source][i]==t)
            flag=1;
    }
}
int main()
{
    while(scanf("%d", &node)==1)
    {
        if(node==0)
            break;
        for(int i=0; i<MX; i++)
            v[i].clear();
        while(scanf("%d", &start)==1)
        {
            if(start==0)
                break;
            while(scanf("%d", &t)==1)
            {
                if(t==0)
                    break;
                v[start].push_back(t);
            }
        }
        scanf("%d", &q);
        for(int j=1; j<=q; j++)
        {
            scanf("%d", &t);
            memset(color, 'W', sizeof(color));
            flag=0;
            DFS(t);
            int sum=0;
            for(int i=1; i<=node; i++)
            {
                if(color[i]=='W')
                    sum++;
            }
            if(flag==0)
            {
                sum++;
                color[t]='W';
            }
            cout << sum;
            for(int i=1; i<=node; i++)
            {
                if(color[i]=='W')
                    cout << " " << i;
            }
            cout << endl;
        }
    }
    return 0;
}
