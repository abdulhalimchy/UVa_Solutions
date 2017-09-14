#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL BigMod(LL a, LL b, LL m)
{
    if(b==0)
        return 1%m;
    LL x = BigMod(a, b/2, m);
    x= (x*x)%m;
    if(b%2==1)
        x = (x*a)%m;
    return x;
}

int main()
{
    LL B, P, M;
    while(scanf("%lld %lld %lld", &B, &P, &M)==3)
    {
        printf("%lld\n", BigMod(B, P, M));
    }
    return 0;
}
