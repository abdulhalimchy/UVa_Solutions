#include<stdio.h>
int main()
{
    int s, a[13], i, j;
    scanf("%d", &s);
    for(i=1; i<=s; i++)
    {
        int t=0;
        for(j=0; j<13; j++)
        {
            scanf("%d", &a[j]);
            if(a[j]==0)
                t=1;
        }
        if(t==1)
            printf("Set #%d: No\n", i);
        else
            printf("Set #%d: Yes\n", i);
    }
    return 0;
}
