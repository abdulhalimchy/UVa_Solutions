#include<stdio.h>
#include<vector>
#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

vector<int> List[205];
int color[205];
void ad_list(int l)
{
    for(int i=1; i<=l; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        List[a].push_back(b);
    }
}
int BFS()
{
    int i;
    memset(color, -1,sizeof(color));
    queue<int> Q;
    vector<int> ::iterator k;
    Q.push(0);
    color[0]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(k=List[u].begin(); k!=List[u].end(); k++)
        {
            if(color[*k]==-1)
            {
                 Q.push(*k);
                 if(color[u]==0)
                    color[*k]=1;
                 else
                    color[*k]=0;
            }
            else if(color[*k]==color[u])
                return 1;
        }
    }
    return 0;
}
int main()
{
    int n, l;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        scanf("%d", &l);
        for(int i=0; i<=205; i++)
            List[i].clear();
        ad_list(l);
        int bi = BFS();
        if(bi==1)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");
    }
    return 0;
}
