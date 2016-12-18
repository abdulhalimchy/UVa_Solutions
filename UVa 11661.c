#include<stdio.h>
#include<string.h>
int main()
{
    long long L, max, d, z, r, i, count;
    char s[2000005];
    while(scanf("%lld", &L)==1)
    {
        if(L==0)
            break;
        scanf("%s", s);
        d=0, z=0, r=0, max=2000005, count=0;
        for(i=0; s[i]!=NULL; i++)
        {
            if(s[i]=='Z')
                {
                    max=0;
                    break;
                }
            if(s[i]=='R' && r==0 && d==0)
            {
                r=1;
            }
            if(s[i]=='D' && d==0 && r==0)
            {
                d=1;
            }
            else if(s[i]=='R' && r==0 && d==1)
            {
                if(count<max)
                    max=count;
                d=0, r=1, count=0;
            }
            else if(s[i]=='D' && d==0 && r==1)
            {
                if(count<max)
                    max=count;
                d=1, r=0, count=0;
            }
            else if(s[i]=='D' && d==1 && r==0)
            {
                count=0;
            }
            else if(s[i]=='R' && r==1 && d==0)
            {
                count=0;
            }
            if(d==1 || r==1)
            {
                count++;
            }
        }
        printf("%lld\n", max);
    }
    return 0;
}
