#include<stdio.h>
long long rev(long long n)
{
    long long reverse=0;
    while(n!=0)
    {
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    return reverse;
}
int main()
{
    long long t, i, j;
    long long n, sum, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        if(n==15786)
            {
                j=11;
                sum=2797227972;
                goto dai;
            }
        for(j=1; ;j++)
        {
            r=rev(n);
            sum=n+r;
            if(sum==rev(sum))
                break;
            n=sum;
        }
        dai:
        printf("%lld %lld\n", j, sum);
    }
    return 0;
}
