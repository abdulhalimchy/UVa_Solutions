#include<stdio.h>
#include<math.h>
#define MX 1005
bool prime[MX];
int cum_prime[MX];
int all_prime[MX];
int in=1;

void sieve()
{
    //In this problem, considering 1 is a prime number.
    prime[0]=1;
    for(int i=4; i<=MX; i+=2)
        prime[i]=1;
    int root=sqrt(MX);
    for(int i=3; i<=root; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=MX; j+=i)
                prime[j]=1;
        }
    }

    for(int i=1; i<MX; i++)
    {
        if(prime[i]==0)
        {
            cum_prime[i]=cum_prime[i-1]+1;
            all_prime[in]=i;
            in++;
        }
        else
            cum_prime[i]=cum_prime[i-1];
    }
}

int main()
{
    sieve();
    int n, c;
    while(scanf("%d %d", &n, &c)==2)
    {
        int d;
        if(cum_prime[n]%2==0)
            d=2*c;
        else
            d=2*c-1;
        printf("%d %d:", n, c);
        if(d>=cum_prime[n])
        {
            for(int i=1; i<=cum_prime[n]; i++)
                printf(" %d", all_prime[i]);
        }
        else
        {
            int i=((cum_prime[n]-d)/2);
            int j=i+d;
            for(i=i+1; i<=j; i++)
                printf(" %d", all_prime[i]);
        }
        printf("\n\n");

    }
    return 0;
}
