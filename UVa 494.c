#include<stdio.h>
#include<string.h>
int main()
{
    char s[200005];
    int word, i, count;
    while(gets(s))
    {
        count=0;
        word=0;
        for(i=0; i<=strlen(s); i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                word=1;
            }
            else if(word==1)
            {
                count++;
                word=0;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
