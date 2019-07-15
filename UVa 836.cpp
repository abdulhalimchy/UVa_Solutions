#include<bits/stdc++.h>
#define MX 25
using namespace std;
int sum[MX][MX], temp[MX];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str[MX][MX];
        scanf("%s", str[1]);
        int n=strlen(str[1]);

        for(int i=2; i<=n; i++)
            scanf("%s", str[i]);

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<n; j++)
            {
                sum[i][j+1]=sum[i-1][j+1]+str[i][j]-'0';
            }
        }

        int ans_mx=0;

        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                int cnt=0, sz=j-i+1;
                for(int k=1; k<=n; k++)
                {
                    temp[k]=sum[j][k]-sum[i-1][k];
                    if(temp[k]==sz)
                    {
                        cnt++;
                        ans_mx=max(cnt*sz, ans_mx);
                    }
                    else
                        cnt=0;

                }
            }
        }
        printf("%d\n", ans_mx);
        if(t!=0)
            printf("\n");
    }
    return 0;
}


/*
2

10111000
00010100
00111000
00111010
00111111
01011110
01011110
00011110

1111
1111
1111
1010
*/
