#include<stdio.h>
int main()
{
    int n, n1, i, given, notgiven, j=1;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        given=0;
        notgiven=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &n1);
            if(n1==0)
                given++;
            else
                notgiven++;
        }
        given=notgiven-given;
        printf("Case %d: %d\n", j, given);
        j++;
    }
    return 0;
}
