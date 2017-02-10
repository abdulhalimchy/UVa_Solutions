#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double x0, y0, x1, y1, cx, cy, r, p, q, f, l, w, x, y, d;
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf", &x0, &y0, &x1, &y1, &cx, &cy, &r);
        f=0;
        w=sqrt((y1-y0)*(y1-y0));
        l=sqrt((x0-x1)*(x0-x1));
        p=w/6.0, q=l/10.0;
        if(p!=q)
        {
            printf("NO\n");
            continue;
        }
        if(l/r!=5.0)
        {
            printf("NO\n");
            continue;
        }
        x=x0, y=(y1+y0)/2.0;
        d=sqrt(((x-cx)*(x-cx))+((y-cy)*(y-cy)));
        p=(l-d)/5.5;
        q=d/4.5;
        if(q!=p)
        {
            printf("NO\n");
            continue;
        }
        x=d, y=y1;
        d=sqrt(((y-cy)*(y-cy)));
        if(w/2.0!=d)
        {
            printf("NO\n");
            continue;
        }
        else
            printf("YES\n");
    }
    return 0;
}
