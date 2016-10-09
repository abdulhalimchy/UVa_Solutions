#include<stdio.h>
#include<math.h>
int main()
{
    long t, i, ara[10005], n, max;
    while(scanf("%ld", &t)==1)
    {
        max=1000002;
        long p , q, u, v;
        for(i=0; i<t; i++)
            scanf("%ld", &ara[i]);
        scanf("%ld", &n);

        for(p=0; p<t; p++)
        {
            for(q=0; q<t; q++)
            {
                if(p==q)
                    continue;
                if(ara[p]+ara[q]==n)
                {
                    if(abs(ara[p]-ara[q])<max)
                    {
                        max=abs(ara[p]-ara[q]);
                        u=p;
                        v=q;
                    }
                }
            }
        }
            if(ara[u]<ara[v])
                printf("Peter should buy books whose prices are %ld and %ld.\n\n", ara[u], ara[v]);
            else if(ara[u]>ara[v])
                printf("Peter should buy books whose prices are %ld and %ld.\n\n", ara[v], ara[u]);
            else
                printf("Peter should buy books whose prices are %ld and %ld.\n\n", ara[v], ara[u]);
    }

    return 0;
}
