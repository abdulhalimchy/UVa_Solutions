#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld", &n)==1)
    {
        if(n<0)
            break;
        n=(n*n)+n+2;
        n=n/2;
        printf("%lld\n", n);
    }
    return 0;
}
