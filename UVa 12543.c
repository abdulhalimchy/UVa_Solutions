#include<stdio.h>
#include<string.h>
int main()
{
    char s[105], t[105], word[105] ;
    int i, len=0, count;
    while(scanf("%s", s)==1)
    {
        if(strcmp(s, "E-N-D")==0)
            break;
        int j=0;
        for(i=0; s[i]!=NULL; i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || s[i]=='-')
            {
                t[j]=s[i];
                j++;
            }
        }
        t[j]=NULL;
        if(strlen(t)>strlen(word))
            strcpy(word, t);
    }
    for(i=0; word[i]!=NULL; i++)
    {
        if(word[i]>='A' && word[i]<='Z')
            word[i]=word[i]+32;
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}
