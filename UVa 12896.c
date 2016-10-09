#include<stdio.h>
int main()
{
    int n, l, i, j, k;
    int ara[1000][100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &l);
        for(j=0; j<2; j++)
        {
            for(k=0; k<l; k++)
            {
                scanf("%d", &ara[j][k]);
            }
        }
        for(k=0; k<l; k++)
        {
            switch(ara[0][k])
            {
            case 0:
                if(ara[1][k]==1)
                    printf(" ");
                break;
            case 1:
                if(ara[1][k]==1)
                    printf(".");
                else if(ara[1][k]==2)
                    printf(",");
                else if(ara[1][k]==3)
                    printf("?");
                else if(ara[1][k]==4)
                    printf("\"");
                break;
            case 2:
                if(ara[1][k]==1)
                    printf("a");
                else if(ara[1][k]==2)
                    printf("b");
                else if(ara[1][k]==3)
                    printf("c");
                break;
            case 3:
                if(ara[1][k]==1)
                    printf("d");
                else if(ara[1][k]==2)
                    printf("e");
                else if(ara[1][k]==3)
                    printf("f");
                break;
            case 4:
                if(ara[1][k]==1)
                    printf("g");
                else if(ara[1][k]==2)
                    printf("h");
                else if(ara[1][k]==3)
                    printf("i");
                break;
            case 5:
                if(ara[1][k]==1)
                    printf("j");
                else if(ara[1][k]==2)
                    printf("k");
                else if(ara[1][k]==3)
                    printf("l");
                break;
            case 6:
                if(ara[1][k]==1)
                    printf("m");
                else if(ara[1][k]==2)
                    printf("n");
                else if(ara[1][k]==3)
                    printf("o");
                break;
            case 7:
                if(ara[1][k]==1)
                    printf("p");
                else if(ara[1][k]==2)
                    printf("q");
                else if(ara[1][k]==3)
                    printf("r");
                else if(ara[1][k]==4)
                    printf("s");
                break;
            case 8:
                if(ara[1][k]==1)
                    printf("t");
                else if(ara[1][k]==2)
                    printf("u");
                else if(ara[1][k]==3)
                    printf("v");
                break;
            case 9:
                if(ara[1][k]==1)
                    printf("w");
                else if(ara[1][k]==2)
                    printf("x");
                else if(ara[1][k]==3)
                    printf("y");
                else if(ara[1][k]==4)
                    printf("z");
                break;
            }
        }
            printf("\n");
    }
    return 0;
}
