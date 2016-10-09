#include<stdio.h>
long GCD(long i, long j)
{
    long k;
    while(j!=0)
    {
        k;
        k=j;
        j=i%j;
        i=k;
    }
    return k;
}
int main()
{
    long t, i, lcm, gcm, a, b;
    scanf("%ld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld %ld", &a, &b);
        gcm=GCD(a,b);
        lcm=(a*b)/gcm;
        if(gcm==a && lcm==b)
            printf("%ld %ld\n", a, b);
        else
            printf("-1\n");
    }
    return 0;
}
