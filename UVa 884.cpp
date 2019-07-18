#include<bits/stdc++.h>
#define MX 1000005
#define ll long long
using namespace std;
int spf[MX], tpf[MX];
ll sum_tpf[MX];

void sieve()
{
    spf[1]=1;
    for(int i=2; i<MX; i++)
        spf[i]=2;
    for(int i=3; i<MX; i+=2)
        spf[i]=i;
    int root=sqrt(MX);
    for(int i=3; i<=root; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<MX; j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
}


void number_of_prime_factors()
{
    tpf[1]=0;
    for(int i=2; i<MX; i++)
    {
        int n=i;
        while(n!=1)
        {
            tpf[i]++;
            n/=spf[n];
        }
        sum_tpf[i]=sum_tpf[i-1]+tpf[i];
    }
}

int main()
{
    int n;
    sieve();
    number_of_prime_factors();
    while(scanf("%d", &n)==1)
    {
        printf("%lld\n", sum_tpf[n]);
    }
    return 0;
}
