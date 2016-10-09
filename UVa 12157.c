#include<stdio.h>
int main()
{
    int t, i, j, n, time;
    float mi, ju;
    float mile, juice;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        mi=0;
        ju=0;
        scanf("%d", &n);
        mile=0, juice=0;
        for(j=0; j<n; j++)
        {
            scanf("%d", &time);
            mile=(time/30.0);
            if(time%30==0 && time>=30)
                mile+=1;
            mile=ceil(mile);
            mi+=(mile*10.0);
            juice=(time/60.0);
            if(time%60==0 && time>=60)
                juice+=1;
            juice=ceil(juice);
            ju+=(juice*15.0);

        }
        if(ju==mi)
            printf("Case %d: Mile Juice %.0f\n", i, ju);
        else if(ju<mi)
            printf("Case %d: Juice %.0f\n", i, ju);
        else
            printf("Case %d: Mile %.0f\n", i, mi);
    }
    return 0;
}
