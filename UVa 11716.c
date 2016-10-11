#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t, i;
    char s[10005];
    scanf("%d", &t);
    getchar();
    for(i=0; i<t; i++)
    {
        int j, len, root, k;
        gets(s);
        len=strlen(s);
        root=sqrt(len);
        if(root*root!=len)
        {
            printf("INVALID\n");
            continue;
        }
        for(j=0; j<root; j++)
        {
            for(k=j; k<len; k+=root)
            {
                printf("%c", s[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
