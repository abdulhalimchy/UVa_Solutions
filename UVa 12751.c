#include<stdio.h>
#define LL long long

int main()
{
    int t, n, k, x, j;
    LL i, sum;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d %d %d", &n, &k, &x);
        sum=0;
        for(i=1; i<=n; i++)
        {
            if(i==x)
            {
                i+=k-1;
                continue;
            }
            sum+=i;
        }
        printf("Case %d: %lld\n", j, sum);
    }
    return 0;
}
