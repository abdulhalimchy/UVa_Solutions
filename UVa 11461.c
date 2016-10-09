#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j, s, t=0, count;
    while(scanf("%d %d", &a, &b)==2)
    {
        count=0;
        if(a==0 && b==0)
            break;
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        for(i=a; i<=b; i++)
        {
            s=sqrt(i);
            if(s*s==i)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
