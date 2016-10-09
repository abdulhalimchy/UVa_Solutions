#include<stdio.h>
int main()
{
    int ara[20000], t, i, day, party, n, j, k, q, l, count;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        count=0;
        q=0;
        scanf("%d %d", &day, &party);
        for(j=1; j<=party; j++)
        {
            scanf("%d", &n);
            l=n;
            for(l; l<=day; l=l+n)
            {
                    ara[q]=l;
                    q++;
            }
        }
        for(j=1; j<3652; j++)
        {
            if(j%7==1 || j%7==2 || j%7==3 || j%7==4 || j%7==5)
            {
                for(k=0; k<q; k++)
                {
                    if(ara[k]==j)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
