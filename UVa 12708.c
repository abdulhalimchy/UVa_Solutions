#include<stdio.h>
#define LL long long

int main()
{
    LL n;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &n);
        if(n%2==0)
            printf("%lld\n", n/2);
        else
            printf("%lld\n", (n-1)/2);
    }
    return 0;
}
