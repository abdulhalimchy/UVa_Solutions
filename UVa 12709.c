#include<stdio.h>

int main()
{
    int n, i;
    double l, w, h, vol, down;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        double max=-1.0;
        vol=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lf %lf %lf", &l, &w, &h);
            down=9.8-(9.8/(2*h));
            if(down>max)
            {
                max=down;
                vol=l*w*h;
            }
            if(down==max)
            {
                if(l*w*h>vol)
                    vol=l*w*h;
            }
        }
        printf("%.0lf\n", vol);
    }
    return 0;
}
