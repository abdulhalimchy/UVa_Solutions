#include<stdio.h>

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y)==2)
    {
        int laps=(y-x);
        if(y%laps==0)
            laps=(y/laps);
        else
            laps=(y/laps)+1;
        printf("%d\n", laps);
    }
return 0;
}
