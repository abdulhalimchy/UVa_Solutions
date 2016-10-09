#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, n, temp, a, b, w, tie, j;
    char s[15];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        a=0, b=0, w=0, tie=0;;
        scanf("%d", &n);
        scanf("%s", &s);
        for(j=0; j<n; j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='B')
                b++;
            else if(s[j]=='W')
                w++;
            else if(s[j]=='T')
                tie++;
        }
        temp=n-a;
        if(temp==0)
            printf("Case %d: ABANDONED\n", i);
        else if(b==w && b+w+tie+a==n)
            printf("Case %d: DRAW %d %d\n", i, b, tie);
        else if(a+tie==n)
            printf("Case %d: DRAW 0 %d\n", i, a, tie);
        else if(b==temp)
            printf("Case %d: BANGLAWASH\n", i);
        else if(w==temp)
            printf("Case %d: WHITEWASH\n", i);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n", i, b, w);
        else if(b<w)
            printf("Case %d: WWW %d - %d\n", i, w , b);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n", i, w , b);

    }
    return 0;
}
