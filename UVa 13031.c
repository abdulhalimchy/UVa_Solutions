#include<stdio.h>
int main()
{
    long long t, p, n, a1[10000], a2[10000], i, j, sum, max, k, temp;
    scanf("%lld", &t);
    for(p=1; p<=t; p++)
    {
        sum=0;
        max=0;
        scanf("%lld", &n);
        for(i=0; i<n; i++)
        {
            scanf("%lld %lld", &a1[i], &a2[i]);
        }
        for(i=0; i<n; i++)
        {
            sum=a1[i]*a2[i];
            if(sum>max)
                max=sum;
        }
        for(i=0; i<n; i++)
        {
            temp=a1[i];
            for(j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                if(a2[j]>=a2[i])
                {
                        temp+=a1[j];
                }
            }
            sum=a2[i]*temp;
            if(sum>max)
                max=sum;
        }
        printf("Case %lld: %lld\n", p, max);
    }
    return 0;
}
