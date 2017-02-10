#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    int p, g, i, j, n;
    while(scanf("%d %d", &p, &g)==2)
    {
        int total=0, f;
        for(i=1; i<=p; i++)
        {
            f=0;
            for(j=1; j<=g; j++)
            {
                scanf("%d", &n);
                if(n==0)
                    f=1;
            }
            if(f==0)
                total++;
        }
        printf("%d\n", total);
    }
    return 0;
}
