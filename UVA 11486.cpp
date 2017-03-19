#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL prime_factors(LL n)
{
    n = abs(n);
    LL root=sqrt(n);
    priority_queue<LL> q;
    map<LL, LL> t;
    if(n%2==0)
    {
        q.push(2);
        t[2]=1;
    }
    while(n>0 && n%2==0)
    {
        n=n/2;
    }
    for(LL i=3; i<=root; i=i+2)
    {
        while(n%i==0)
        {
            if(t[i]==0)
            {
                q.push(i);
                t[i]=1;
            }
            n=n/i;
        }
    }
    if(n>2)
        q.push(n);
    if(q.size()>=2)
        return q.top();
    return -1;
}
int main()
{
    LL n;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;
        printf("%lld\n", prime_factors(n));
    }
    return 0;
}
