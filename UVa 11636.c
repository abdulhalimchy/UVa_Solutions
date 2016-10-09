#include<stdio.h>
int count(int n)
{
    int s=1, c=0;
    while(1)
    {
        s*=2;
        c++;
        if(s>=n)
            break;
    }
    return c;
}
int main()
{
    int n, i=0, t;
    while(scanf("%d", &n)==1)
    {
        if(n<0)
            break;
        i++;
        if(n==1)
            printf("Case %d: 0\n", i);
        else
        {
           t=count(n);
           printf("Case %d: %d\n", i, t);
        }
    }
    return 0;
}
