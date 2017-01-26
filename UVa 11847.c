#include<stdio.h>
int main()
{
    int n, temp, count, i, t;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        temp=n, count=0, t=0;
        for(i=1; i<=n; i++)
        {
            if(t>=i)
                continue;
            else if(temp>i)
            {
                temp=temp-i;
                t=n-temp;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
