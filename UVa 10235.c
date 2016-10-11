#include<stdio.h>
#include<math.h>
#define max 1000005
int prime[max];
void sieve()
{
    int i, j, root;
    for(i=2; i<=max; i++)
    {
        prime[i]=1;
    }
    root=sqrt(max);
    for(i=2; i<=root; i++)
    {
        if(prime[i]==1)
        {
            for(j=2; i*j<max; j++)
            {
                prime[i*j]=0;
            }
        }
    }
}
int is_prime(int n)
{
    if(n<2)
        return 0;
    return prime[n];
}
int rev(int n)
{
    int last, temp=n, re=0;
    while(temp>0)
    {
        last=temp%10;
        re=re*10+last;
        temp=temp/10;
    }
    if(is_prime(re)==1 && re!=n)
        return 1;
    return 0;
}
int main()
{
    int n;
    sieve();
    while(scanf("%d", &n)==1)
    {
        if(rev(n)==1 && is_prime(n)==1)
            printf("%d is emirp.\n", n);
        else if(is_prime(n)==1)
            printf("%d is prime.\n", n);
        else
            printf("%d is not prime.\n", n);
    }
    return 0;
}
