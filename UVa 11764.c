#include<stdio.h>
int main()
{
    int t, wall, i, k, n, a, high, low;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        high = 0;
        low = 0;
        scanf("%d", &wall);
        scanf("%d", &n);
        a = n;
        for(k=1; k<wall; k++){
            scanf("%d", &n);
            if(a<n){
                    high+=1;
            }
            if(a>n){
                low+=1;
            }
                a = n;
        }

        printf("Case %d: %d %d\n", i, high, low);
    }
    return 0;
}
