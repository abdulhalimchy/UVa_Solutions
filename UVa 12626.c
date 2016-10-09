#include<stdio.h>
int main()
{
    char s[602];
    int n, k, j, a, m, r, g, i, t, count, l;
    scanf("%d", &n);
    for(k=0; k<n; k++)
    {
        scanf("%s", s);
        count=0;
        a=0, m=0, r=0, g=0, i=0, t=0;
        for(j=0; s[j]!=NULL; j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='M')
                m++;
            else if(s[j]=='R')
                r++;
            else if(s[j]=='I')
                i++;
            else if(s[j]=='G')
                g++;
            else if(s[j]=='T')
                t++;

        }
        for(l=0;l<601;l++)
        {
            if(a>=3 && m>=1 && r>=2 && i>=1 && g>=1 && t>=1)
            {
                count++;
                a-=3;
                m-=1;
                r-=2;
                i-=1;
                g-=1;
                t-=1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
