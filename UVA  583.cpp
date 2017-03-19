#include<stdio.h>
#include<iostream>
#include<math.h>
#define LL long long
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

void prime_factors(LL n)
{
    LL temp=n;
    n=abs(n);
    LL root=sqrt(n);
    vector<LL> v;
    while(n>0 && n%2==0)
    {
        v.push_back(2);
        n=n/2;
    }
    for(LL i=3; i<=root; i=i+2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>2)
        v.push_back(n);
    sort(v.begin(), v.end());
    printf("%lld = ", temp);
    if(temp < 0)
        printf("-1 x ");
    for(LL i=0; i<v.size(); i++)
    {
        printf("%lld", v[i]);
        if(i<v.size()-1)
            printf(" x ");
    }
    printf("\n");
}
int main()
{
    LL n;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;
        prime_factors(n);
    }
    return 0;
}
