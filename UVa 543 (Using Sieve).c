#include<stdio.h>
#include<math.h>
#define size 1000005
int ara[size];
void sieve()
{
    int i, j, root;
    root=sqrt(size);
    for(i=2; i<=size; i++)
        ara[i]=1;
    for(i=2; i<=root; i++)
    {
        if(ara[i]==1)
        {
            for(j=2; i*j<=size; j++)
            {
                ara[i*j]=0;
            }
        }
    }
}
int is_prime(int n)
{
    int i;
    if(n<2)
        return 0;
    return ara[n];
}
int main()
{
    int n, k;
    sieve();
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        int flag=0;
        for(k=2; k<=n/2; k++)
        {
            if(is_prime(k)==1 && is_prime(n-k)==1)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==1)
            printf("%d = %d + %d\n", n, k, n-k);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
