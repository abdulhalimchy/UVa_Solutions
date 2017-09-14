#include<iostream>
#include<stdio.h>
#define LL long long
using namespace std;

int LowerBound(LL ara[], LL age, LL n)
{
    LL beg=1, en=n;
    while(beg<=en)
    {
        LL mid = (beg+en)/2;
        if(age==ara[mid])
        {
            en = mid-1;
        }
        else if(age<ara[mid])
            en = mid-1;
        else
            beg = mid+1;
    }
    return beg-1;
}

int UpperBound(LL ara[], LL age, LL n)
{
    LL beg=1, en=n;
    while(beg<=en)
    {
        LL mid = (beg+en)/2;
        if(age==ara[mid])
        {
            beg = mid+1;
        }
        else if(age<ara[mid])
            en = mid-1;
        else
            beg = mid+1;
    }
    return en+1;
}

int main()
{
    LL n, ara[50005], age, q;
    scanf("%lld", &n);
    for(int i=1; i<=n; i++)
        scanf("%lld", &ara[i]);
    scanf("%lld", &q);
    for(int i=1; i<=q; i++)
    {
        scanf("%lld", &age);
        int res = LowerBound(ara, age, n);
        if(res!=0)
            printf("%lld ", ara[res]);
        else
            printf("X ");

        res = UpperBound(ara, age, n);
        if(res!=n+1)
            printf("%lld\n", ara[res]);
        else
            printf("X\n");
    }
    return 0;
}
