#include<stdio.h>
int main()
{
    int t, i, n, l, type[15], limit[15], j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int mx=0, f=0;
        scanf("%d %d", &n, &l);
        for(j=0; j<n; j++)
            scanf("%d", &type[j]);
        for(j=0; j<n; j++)
            scanf("%d", &limit[j]);
        for(j=0; j<n; j++)
        {
            if(limit[j]>=type[j])
                mx+=type[j];
            else
            {
                f=1;
                break;
            }
            if(mx>l)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
