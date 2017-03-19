#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t, i, a, f;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &f);
        for(int j=1; j<=f; j++)
        {
            for(int k=1; k<=a; k++)
            {
                for(int l=1; l<=k; l++)
                {
                    printf("%d", k);
                }
                printf("\n");
            }
            for(int k=a-1; k>0; k--)
            {
                for(int l=1; l<=k; l++)
                {
                    printf("%d", k);
                }
                printf("\n");
            }
            if(j<f)
                printf("\n");
        }
        if(i<t)
            printf("\n");
    }
    return 0;
}
