#include<stdio.h>
#include<math.h>
int main()
{
    int n, k, t, i, j, total;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        total=0;
        int root=sqrt(n);
        for(j=1; j<=root; j++)
        {
            if(n%j==0)
            {
                if(j%k!=0)
                    total+=j;
                int temp=n/j;
                if(temp%k!=0 && temp!=j)
                    total+=temp;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
