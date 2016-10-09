#include<stdio.h>
int main()
{
    int t, a, b, c, d, e, count;
    while(scanf("%d", &t)==1)
    {
        count=0;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if(a==t)
            count++;
        if(b==t)
            count++;
        if(c==t)
            count++;
        if(d==t)
            count++;
        if(e==t)
            count++;
        printf("%d\n", count);
    }
    return 0;
}
