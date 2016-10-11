#include<stdio.h>
#include<math.h>
int main()
{
    long long t, i, l, h, count, max, root, p, q, num;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        max=0;
        scanf("%lld %lld", &l, &h);
        for(p=l; p<=h; p++)

        {
            count=0;
            root=sqrt(p);
            for(q=1; q<=root; q++)
            {
                if(p%q==0)
                {
                    count++;
                    if((p/q)!=q)
                        count++;
                }
            }
            if(count>max)
            {
                max=count;
                num=p;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, h, num, max);
    }
    return 0;
}
