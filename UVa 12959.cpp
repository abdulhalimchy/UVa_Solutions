#include<bits/stdc++.h>
#define LL long long
#define mx 505
using namespace std;

int main()
{
    int r[mx], p[mx],J, R, i, MAX, n, win;
    while(scanf("%d %d", &J, &R)==2)
    {
        memset(r, 0, sizeof(r));
        memset(p, 0, sizeof(p));
        MAX=0;
        int t=R*J, index;
        for(i=1; i<=t; i++)
        {
            scanf("%d", &n);
            if(i%J==0)
                index=J;
            else
                index=i%J;
            r[index]+=n;
            if(p[index]<n)
                p[index]=n;
            if(r[index]>MAX)
            {
                MAX=r[index];
                win=index;
            }
            else if(MAX==r[index])
            {
                if(p[index]>=p[win])
                    win=index;
            }
        }
        printf("%d\n", win);
    }
    return 0;
}
