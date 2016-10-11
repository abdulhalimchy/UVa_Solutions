#include<stdio.h>
const long long max = 1000005;
int main()
{
    long long n, m, jac[max], jil[max], i, j, count;
    while(scanf("%lld %lld", &n, &m)==2)
    {
        if(n==0 && m==0)
            break;
        count=0;
        for(i=0; i<n; i++)
            scanf("%lld", &jac[i]);
        for(i=0; i<m; i++)
            scanf("%lld", &jil[i]);
        long long end=m, beg=0, mid=(end+beg)/2;
        for(i=0; i<n; i++)
        {
            end=m, beg=0, mid=(end+beg)/2;
            while(beg<=end)
            {
                if(jac[i]>jil[mid])
                {
                    beg=mid+1;
                    mid=(end+beg)/2;
                }
                if(jac[i]<jil[mid])
                {
                    end=mid-1;
                    mid=(end+beg)/2;
                }
                if(jac[i]==jil[mid])
                    {
                        count++;
                        break;
                    }
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
