#include<stdio.h>
#include<math.h>
long long prime(long long n)
{
    long long i, root=sqrt(n);
    if(n==1 || n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i<=root; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
long long palindrome(long long n)
{
    long long lastdigit, temp=n, s=0;
    while(temp>0)
    {
        lastdigit=temp%10;
        s=s*10+lastdigit;
        temp=temp/10;
    }
    if(s==n)
        return 1;
    return 0;
}
int main()
{
    long long n;
    while(scanf("%lld", &n)==1)
    {
        if(prime(n)==1 && palindrome(n)==1)
        {
            printf("%lld\n", n*2);
            break;
        }
        printf("%lld\n", n*2);
    }
    return 0;
}
