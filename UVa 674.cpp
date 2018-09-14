#include<bits/stdc++.h>
#define MX 7492
using namespace std;
int coins[]={0, 50, 25, 10, 5, 1}, dp[6][MX], amountTomake;

int make(int i, int curAmount)
{
    if(i>5)
    {
        if(amountTomake==curAmount)
            return 1;
        else
            return 0;
    }
    if(dp[i][curAmount]!=-1)
        return dp[i][curAmount];
    int ret1=0, ret2=0;
    if(curAmount+coins[i]<=amountTomake)
        ret1=make(i, curAmount+coins[i]);
    ret2=make(i+1, curAmount);
    return dp[i][curAmount]= ret1+ret2;
}

int main()
{

    while(scanf("%d", &amountTomake)==1)
    {
        memset(dp, -1, sizeof(dp));
        printf("%d\n",make(1, 0));
    }
    return 0;
}

