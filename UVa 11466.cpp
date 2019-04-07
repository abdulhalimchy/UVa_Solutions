#include<bits/stdc++.h>
#define MX 10000005
#define ll long long
using namespace std;
bool prime[MX];
vector<int> v;

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
        }
    }
}

ll prime_factor(ll n)
{
    int sz=v.size();
    ll mx=0, cnt=0;
    ll temp=n;
    for(int i=0; i<sz && v[i]*v[i]<=temp; i++)
    {
        bool f=0;
        while(n%v[i]==0)
        {
            n/=v[i];
            if(f==0)
            {
                f=1;
                cnt++;
                mx=v[i];
            }
        }
        if(n==1)
            break;
    }
    if(n!=1)
    {
        cnt++;
        mx=n;
    }
    if(cnt>1)
        return mx;
    return -1;
}


int main()
{
    sieve();
    ll n;

    for(;;)
    {
        scanf("%lld", &n);
        if(n==0)
            break;

        printf("%lld\n", prime_factor(abs(n)));
    }

    return 0;
}
