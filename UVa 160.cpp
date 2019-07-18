#include<bits/stdc++.h>
#define MX 105
using namespace std;
int spf[MX], fr[MX], sz;
bool prime[MX];
vector<int> v;

void sieve()
{
    prime[0]=1;
    prime[1]=1;
    for(int i=4; i<MX; i+=2)
        prime[i]=1;
    int root=sqrt(MX);
    for(int i=3; i<=root; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<MX; j+=i)
                prime[j]=1;
        }
    }

    for(int i=2; i<MX; i++)
    {
        if(prime[i]==0)
        {
            sz++;
            v.push_back(i);
        }
    }
}

void generate_spf()
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


void prime_factors(int num)
{
    int mx=0;
    for(int i=2; i<=num; i++)
    {
        int n=i;
        while(n!=1)
        {
            fr[spf[n]]++;
            mx=max(mx, spf[n]);
            n/=spf[n];
        }
    }
    if(num<10)
        printf("  ");
    else if(num<100)
        printf(" ");

    printf("%d! =", num);
    if(fr[2]<10)
        printf("  ");
    else
        printf(" ");
    printf("%d", fr[2]);
    fr[2]=0;
    for(int i=1; i<sz; i++)
    {
        if(v[i]>mx)
            break;
        if(i==15)
            printf("\n      ");
        if(fr[v[i]]<10)
            printf("  ");
        else
            printf(" ");
        printf("%d", fr[v[i]]);
        fr[v[i]]=0;
    }
    printf("\n");
}

int main()
{
    int n;
    sieve();
    generate_spf();
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        prime_factors(n);
    }
    return 0;
}
