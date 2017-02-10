#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    char t1[105], t2[105], i, j=1;
    while(scanf("%s %s", &t1, &t2)==2)
    {
        char s1[105], s2[105];
        memset(s1, '\0', sizeof(s1));
        memset(s2, '\0', sizeof(s2));
        strcpy(s1, t1);
        strcpy(s2, t2);
        int f=0;
        int len = max(strlen(s1), strlen(s2));
        for(i=0; i<len; i++)
        {
            if(s1[i]=='.' && s2[i]!='.')
            {
                f=2;
                break;
            }
            if(s1[i]!='.' && s2[i]=='.')
            {
                f=1;
                break;
            }
            if(s1[i]==s2[i])
            {
                f=0;
                continue;
            }
            else if((s1[i]>s2[i] && s2[i]!=NULL) || (s1[i]>s2[i] && s1[i]!='0'))
            {
                f=1;
                break;
            }
            else if((s2[i]>s1[i] && s1[i]!=NULL) || (s2[i]>s1[i] && s2[i]!='0'))
            {
                f=2;
                break;
            }

        }
        if(f==0)
            printf("Case %d: Same\n", j);
        else if(f==1)
            printf("Case %d: Bigger\n", j);
        else if(f==2)
            printf("Case %d: Smaller\n", j);
        j++;
    }
    return 0;
}
