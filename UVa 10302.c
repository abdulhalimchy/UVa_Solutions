#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld", &n)==1)
    {
        n = (n*(n+1))/2;
        n*=n;
        printf("%lld\n", n);
    }
    return 0;
}
