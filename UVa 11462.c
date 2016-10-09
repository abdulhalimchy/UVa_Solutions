#include<stdio.h>
int main()
{
    long n, age[2000002], i, j, m;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        m=0;
        for(i=0; i<n; i++)
            scanf("%d", &age[i]);
        for(i=1; i<102; i++)
        {
            for(j=0; j<n; j++)
            {
                if(age[j]==i && j<n)
                    {
                        if(m==n-1)
                            {
                                printf("%d\n", age[j]);
                                break;
                            }
                        if(m<n-1)
                        {
                            printf("%d ", age[j]);
                            m++;
                        }
                    }
            }
        }
    }
    return 0;
}
