#include<stdio.h>
int main()
{
    int t, m, n, x, y, i;
    while(scanf("%d", &t)==1)
    {
        if(t==0)
            break;
        scanf("%d %d", &m, &n);
        for(i=0; i<t; i++)
        {
            scanf("%d %d", &x, &y);
            if(x>m && y>n)
                printf("NE\n");
            if(x>m && y<n)
                printf("SE\n");
            if(x<m && y>n)
                printf("NO\n");
            if(x<m && y<n)
                printf("SO\n");
            if(x==m || y==n)
                printf("divisa\n");
        }
    }
    return 0;
}
