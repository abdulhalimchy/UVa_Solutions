#include<stdio.h>
int main()
{
    int t, i, e, f, c;
    int count;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &e, &f, &c);
        count=0;
        e=e+f;
        while(e>=c)
        {
            count+=e/c;
            e=(e/c)+(e%c);

        }
        printf("%d\n", count);
    }
    return 0;
}
