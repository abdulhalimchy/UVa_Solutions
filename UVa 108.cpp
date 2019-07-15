#include<bits/stdc++.h>
#define MX 105
using namespace std;
int sum[MX][MX], temp[MX];

int main()
{
    int n, num;
    while(scanf("%d", &n)==1)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                scanf("%d", &num);
                sum[i][j]=sum[i-1][j]+num;
            }
        }

        int ans_mx=INT_MIN;

        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                int mx=INT_MIN, cur_mx=0;
                for(int k=1; k<=n; k++)
                {
                    temp[k]=sum[j][k]-sum[i-1][k];
                    cur_mx+=temp[k];
                    if(cur_mx>mx)
                    {
                        mx=cur_mx;
                        ans_mx=max(mx, ans_mx);
                    }
                    if(cur_mx<0)
                        cur_mx=0;
                }
            }
        }
        printf("%d\n", ans_mx);
    }
    return 0;
}

