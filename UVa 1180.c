#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    int ara[200000];
    char ch;
    scanf("%d", &n);
    for(i=0; i<n-1; i++)
    {
        scanf("%d", &ara[i]);
        scanf("%c", &ch);
    }
    scanf("%d", &ara[i]);
    for(i=0; i<n; i++)
    {
        if(ara[i]==2 || ara[i]==3 || ara[i]==5 || ara[i]==7 || ara[i]==13 || ara[i]==17 || ara[i]==19 || ara[i]==31)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
