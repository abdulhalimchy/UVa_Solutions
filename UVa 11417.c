#include<stdio.h>
int GCD(int i, int j)
{
    int t;
    while(j!=0)
    {
        t;
        t=j;
        j=i%j;
        i=t;
    }
    return t;
}
int main()
{
    int n, a, b, t;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        t=0;
        for(a=1; a<n; a++)
        {
            for(b=a+1; b<=n; b++)
            {
                t+=GCD(a,b);
            }
        }
        printf("%d\n", t);
    }
    return 0;
}
