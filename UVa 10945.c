#include<stdio.h>
#include<string.h>
void rev(char s[], char r[])
{
    int k, l;
    for(k=strlen(s)-1, l=0; s[k]!=NULL; k--, l++)
    {
        r[l]=s[k];
    }
    r[l]=NULL;
}
int main()
{
    char s1[1000], s2[1000], s3[1000];
    int i, j;
    while(gets(s1))
    {
        if(strcmp(s1, "DONE")==0)
            break;
        for(i=0, j=0; s1[i]!=NULL; i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            {
                s2[j]=s1[i];
                j++;
            }
            if(s1[i]>='A' && s1[i]<='Z')
            {
                s2[j]=s1[i]+32;
                j++;
            }
        }
        s2[j]=NULL;
        rev(s2, s3);
        s3[strlen(s2)]=NULL;
        if(strcmp(s2, s3)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");

    }
    return 0;
}
