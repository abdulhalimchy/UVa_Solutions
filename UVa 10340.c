#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000], t[100000];
    int i, j, a;
    while(scanf("%s %s", s, t)==2)
    {
        int count=0;
        j=0;
        for(i=0; s[i]!=NULL; i++)
        {
            for(j; t[j]!=NULL; j++)
            {
                if(s[i]==t[j])
                {
                    j++;
                    count++;
                    break;
                }
            }
        }
        if(count==strlen(s))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
