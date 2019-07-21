#include<bits/stdc++.h>
#define ll long long
#define MX 17
using namespace std;
int mod, d, n, fra[MX];
ll m[MX][MX], temp[MX][MX];

void multiply(ll a[][MX], ll b[][MX])
{
    ll mul[MX][MX];
    for (int i=0; i<d; i++)
    {
        for (int j=0; j<d; j++)
        {
            mul[i][j]=0;
            for (int k=0; k<d; k++)
                mul[i][j]=(mul[i][j]+((a[i][k]*b[k][j])%mod))%mod;
        }
    }
    for (int i=0; i<d; i++)
        for (int j=0; j<d; j++)
            a[i][j] = mul[i][j]%mod;
}

void nth_power(ll m[][MX], int n)
{
    if(n==0 || n==1)
        return;
    nth_power(m, n/2);
    multiply(m, m);
    if(n%2==1)
        multiply(m, temp);
}

int cal_fn(int n)
{
    if(n<=d)
    {
        return fra[n-1]%mod;
    }

    for(int i=1; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            if(i==j+1)
            {
                m[i][j]=1;
                temp[i][j]=1;
            }
            else
            {
                m[i][j]=0;
                temp[i][j]=0;
            }
        }
    }

    nth_power(m, n-d);
    ll ans=0;

    for(int i=0; i<d; i++)
    {
        ans =(ans+m[0][i]*fra[d-i-1])%mod;
    }
    return ans%mod;
}

int main()
{
    while(scanf("%d %d %d", &d, &n, &mod)==3)
    {
        if(d+n+mod==0)
            break;
        for(int i=0; i<d; i++)
        {
            scanf("%lld", &m[0][i]);
            temp[0][i]=m[0][i];
        }
        for(int i=0; i<d; i++)
            scanf("%d", &fra[i]);
        printf("%d\n", cal_fn(n));
    }
    return 0;
}
