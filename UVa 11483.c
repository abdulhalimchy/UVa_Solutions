#include<stdio.h>
#include<string.h>
int main()
{
    int n, i=1, j;
    char s[1000];
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        printf("Case %d:\n", i);
        printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
        getchar();
        for(j=0; j<n; j++)
        {
            gets(s);
            int k;
            printf("printf(\"");
            for(k=0; s[k]!=NULL; k++)
            {
                if(s[k]=='"' || s[k]=='\\')
                    printf("\\");
                printf("%c", s[k]);
            }
            printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\n");
        printf("return 0;\n}\n");
        i++;
    }
    return 0;
}
