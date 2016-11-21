#include<stdio.h>
#include<math.h>
#define max 33000
int ara[max];
void sieve()
{
    int i, j, root=sqrt(max);
    for(i=2; i<=max; i++)
        ara[i]=1;
    for(i=2; i<=root; i++)
    {
        if(ara[i]==1)
        {
            for(j=2; i*j<=max; j++)
                ara[i*j]=0;
        }
    }
}
int prime(int n)
{
    if(n<2)
        return 0;
    return ara[n];
}
int main()
{
    int n, count, p;
    sieve();
    while(scanf("%d", &n)==1)
    {
        int half=n/2;
        count=0;
        if(n==0)
            break;
        for(p=1; p<=half; p++)
        {
            if(prime(p)==1 && prime(n-p)==1)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
