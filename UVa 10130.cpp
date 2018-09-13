#include<bits/stdc++.h>
#define MX 1005
using namespace std;
int n, capacity, weight[MX], value[MX], g, dp[MX][35];

int max_value(int i, int w)
{
    if(i>n)
        return 0;
    int profit1=0, profit2=0;
    if(dp[i][w]!=-1)
       return dp[i][w];
    if(w+weight[i]<=capacity)
        profit1 = value[i]+max_value(i+1, w+weight[i]);
    profit2 = max_value(i+1, w);
    return  dp[i][w]=max(profit1, profit2);

}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(int j=1; j<=n; j++)
        {
            scanf("%d %d", &value[j], &weight[j]);
        }
        scanf("%d", &g);
        int sum=0;
        for(int k=1; k<=g; k++)
        {
            memset(dp, -1, sizeof(dp));
            scanf("%d", &capacity);
            sum+=max_value(1,0);
        }

        printf("%d\n", sum);
    }
    return 0;
}

