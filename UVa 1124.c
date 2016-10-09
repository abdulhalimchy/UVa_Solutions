#include<stdio.h>
int main()
{
    char str[10000];
    while(gets(str))
    {
        printf("%s\n", str);
    }
    return 0;
}
