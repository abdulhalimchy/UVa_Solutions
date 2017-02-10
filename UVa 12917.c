#include<stdio.h>

int main()
{
    int P, H, O;
    while(scanf("%d %d %d", &P, &H, &O)==3)
    {
        if(O>P)
            O=O-P;
        else
        {
            printf("Hunters win!\n");
            continue;
        }
        if(H-O>0)
        {
            printf("Hunters win!\n");
        }
        else
            printf("Props win!\n");
    }
    return 0;
}
