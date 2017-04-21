#include<bits/stdc++.h>
#define MX 100005
using namespace std;

vector<int> v[MX];
stack<int> serial;
int color[MX];
int node, edge, k;

void List()
{
    int a, b;
    for(int i=1; i<MX; i++)
        v[i].clear();
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
    }
}
void DFS1(int source)
{
    color[source]=k;
    vector<int> ::iterator i;
    for(i=v[source].begin(); i!=v[source].end(); i++)
    {
        if(color[*i]!=k)
        {
            DFS1(*i);
        }
    }
    serial.push(source);
}
void DFS2(int source)
{
    color[source]=0;
    vector<int> ::iterator i;
    for(i=v[source].begin(); i!=v[source].end(); i++)
    {
        if(color[*i]==k)
        {
            DFS2(*i);
        }
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    for(k=1; k<=test; k++)
    {
        int cnt=0;
        scanf("%d %d", &node, &edge);
        List();
        for(int j=1; j<=node; j++)
        {
            if(color[j]!=k)
                DFS1(j);
        }
        while(serial.size())
        {
            if(color[serial.top()]==k)
            {
                cnt++;
                DFS2(serial.top());
            }
            serial.pop();
        }
        printf("%d\n", cnt);
    }
    return 0;
}
