#include<bits/stdc++.h>
#define MX 1005
using namespace std;
int n, capacity, weight[MX], value[MX], g, dp[MX][35];

int max_value()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=capacity; j++)
        {
            if(weight[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
        }
    }
    return dp[n][capacity];
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
            scanf("%d", &capacity);
            sum+=max_value();
        }
        printf("%d\n", sum);
    }
    return 0;
}
