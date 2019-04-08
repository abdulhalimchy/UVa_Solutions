#include<bits/stdc++.h>
#define MX 100005
#define ll long long
using namespace std;
bool prime[MX];
vector<int> v;
ll sz=0;

void sieve()
{
    prime[0]=1;
    prime[1]=1;
    for(int i=4; i<=MX; i+=2)
        prime[i]=1;
    int root = sqrt(MX);
    for(int i=3; i<=root; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=MX; j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=MX; i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            sz++;
        }
    }

}

void prime_factor(ll n)
{
    for(int i=0; i<sz; i++)
    {
        while(n%(ll)v[i]==0)
        {
            n/=(ll)v[i];
            printf("    %lld\n", (ll)v[i]);
        }
        if(n==1)
            break;
    }
    if(n>1)
       printf("    %lld\n", n);
    printf("\n");

}


int main()
{
    sieve();
    ll n;
    while(true)
    {
        scanf("%lld", &n);
        if(n<0)
            break;
        prime_factor(n);
    }

    return 0;
}

