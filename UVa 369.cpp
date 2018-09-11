#include<bits/stdc++.h>
#define MX 105
#define ll long long
using namespace std;

ll dp[MX][MX];

ll nCr(int n, int r)
{
     if(n==r)
          return 1;
     if(r==1)
          return n;
     if(dp[n][r]!=0)
          return dp[n][r];
     dp[n][r]=nCr(n-1, r)+nCr(n-1, r-1);
     return dp[n][r];
}

int main()
{
     int n, r;
     while(true)
     {
         scanf("%d %d", &n, &r);
         if(n==r && r==0)
            break;
         printf("%d things taken %d at a time is %lld exactly.\n", n, r, nCr(n,r));

     }
     return 0;
}
