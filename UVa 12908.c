#include<stdio.h>
#define LL long long

int main()
{
    LL s, i, sum;
    while(scanf("%lld", &s)==1)
    {
        if(s==0)
            break;
        sum=0;
        for(i=1; sum<=s; i++)
            sum+=i;
        printf("%lld %lld\n", sum-s, i-1);
    }
    return 0;
}
