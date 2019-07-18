#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod;

void multiply(ll a[][2], ll b[][2])
{
    ll mul[2][2];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            mul[i][j]=0;
            for (int k=0; k<2; k++)
                mul[i][j]=(mul[i][j]+((a[i][k]*b[k][j])%mod))%mod;
        }
    }

    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            a[i][j] = mul[i][j]%mod;
}

void nth_power(ll m[][2], ll n)
{
    if(n==0 || n==1)
        return;
    ll temp[][2]={{1, 1}, {1, 0}};
    nth_power(m, n/2);
    multiply(m, m);
    if(n%2==1)
        multiply(m, temp);
}

ll fibonacci(ll n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1%mod;

    ll m[][2]={{1, 1}, {1, 0}};
    nth_power(m, n-1);
    return (m[0][0]*1+m[0][1]*0)%mod;
}

int main()
{
    ll n;
    while(scanf("%lld %lld", &n, &mod)==2)
    {
        mod=1<<mod;
        printf("%lld\n", fibonacci(n));
    }
    return 0;
}
