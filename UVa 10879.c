#include<stdio.h>
#include<math.h>
int main()
{
    long long n, t, i;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        long long p, q , root=sqrt(n), c=0;
        printf("Case #%lld: %lld", i, n);
        for(p=2; p<=root; p++)
        {
            if(n%p==0 && p!=n/p)
                {
                    printf(" = %lld * %lld", n/p, p);
                    c++;
                }
                if(c==2)
                    break;

        }
        printf("\n");
    }
    return 0;
}
