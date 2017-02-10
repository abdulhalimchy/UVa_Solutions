#include<stdio.h>
#include<math.h>

int main()
{
    double x, y, r, mn, mx, len;
    int t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &r);
        len = sqrt((x*x)+(y*y));
        mn=r-len;
        mx=r+len;
        printf("%.2lf %.2lf\n", mn, mx);
    }
    return 0;
}
