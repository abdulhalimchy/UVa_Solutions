#include<stdio.h>
#include<math.h>
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

int main()
{
    long n, i, f;
    while(scanf("%ld", &n)==1)
    {
        f=0;
        if(n==0)
            break;
        if(n==4)
        {
            printf("4:\n2+2\n");
            continue;
        }
        if(prime(n-2)==1)
        {
            printf("%ld:\n2+%ld\n", n, n-2);
            continue;
        }
        else
        {
            for(i=1; i<=sqrt(n); i+=2)
            {
                if(prime(i)==1 && prime(n-i)==1)
                {
                    f=1;
                    goto end;
                }
            }
        }
        end:
            if(f==1)
                printf("%lld is the sum of %lld and %lld.\n", n, i, n-i);
            else
                printf("%ld:\nNO WAY!\n", n);
    }
    return 0;
}
