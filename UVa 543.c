#include<stdio.h>
#include<math.h>
long prime(long n);
int main()
{
    long n, i;
    while(scanf("%ld", &n)==1)
    {
        if(n==0)
            break;
        for(i=2; i<n; i++)
        {
            if(prime(i)==1 && prime(n-i)==1)
            {
                goto end;
            }
        }
        end:
            printf("%ld = %ld + %ld\n", n, i, n-i);
    }
    return 0;
}
long prime(long n)
{
    long i, root;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    root=sqrt(n);
    for(i=3; i<=root; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
