#include<stdio.h>
#include<iostream>
#define LL long long
using namespace std;

int main()
{
    LL t, n, sum;
    scanf("%lld", &t);
    for(LL i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        n = ((n*(n+1))/2);
        if(n%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
