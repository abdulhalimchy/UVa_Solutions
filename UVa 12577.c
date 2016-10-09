#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i=1;
    while(scanf("%s", str)==1){
        if(strcmp(str, "*")==0)
            break;
        if(strcmp(str, "Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n", i);
        if(strcmp(str, "Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}
