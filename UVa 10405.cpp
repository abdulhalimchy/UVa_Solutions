#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char s1[1005], s2[1005];
    int dp[1200][1200];
    while(gets(s1))
    {
        gets(s2);
        memset(dp, 0, sizeof(dp[0][0]) *1200*1200);
        int x=strlen(s1), y=strlen(s2);
        for(int i=1; i<=y; i++)
        {
            for(int j=1; j<=x; j++)
            {
                if(s1 [j-1]==s2[i-1])
                {
                    dp[i][j]+=dp[i-1][j-1]+1;
                }
                else if(dp[i-1][j]>=dp[i][j-1])
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        printf("%d\n", dp[y][x]);
    }
    return 0;
}
