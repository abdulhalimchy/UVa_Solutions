#include<stdio.h>
int main()
{
    char s[10];
    int t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", s);
        if(strlen(s)==5)
            printf("3\n");
        else if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e' || (s[1]=='n' && s[2]=='e')))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
