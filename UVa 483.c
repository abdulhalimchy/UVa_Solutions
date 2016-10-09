#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i, j, a, l;
    while(gets(s))
    {
        a=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1; j>=a; j--)
                {
                    printf("%c", s[j]);
                }
                printf(" ");
                a=i+1;
            }
            if(i==l-1)
            {
                for(j=i; j>=a; j--)
                    printf("%c", s[j]);
                printf("\n");
            }
        }
    }
    return 0;
}
