#include<stdio.h>
#define LL long long

LL value(LL n)
{
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    if(n==3)
        return 2;
    return value(n/2)+(n%2);
}

int main()
{
    LL n, t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        printf("%lld\n", value(n));
    }
return 0;
}
