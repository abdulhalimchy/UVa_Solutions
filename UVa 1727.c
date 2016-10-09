#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, count, j, m;
    char s1[5], s2[5];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%s %s", s1, s2);
        if(strcmp(s1, "JAN")==0)
            m=31;
        else if(strcmp(s1, "FEB")==0)
            m=28;
        else if(strcmp(s1, "MAR")==0)
            m=31;
        else if(strcmp(s1, "APR")==0)
            m=30;
        else if(strcmp(s1, "MAY")==0)
            m=31;
        else if(strcmp(s1, "JUN")==0)
            m=30;
        else if(strcmp(s1, "JUL")==0)
            m=31;
        else if(strcmp(s1, "AUG")==0)
            m=31;
        else if(strcmp(s1, "SEP")==0)
            m=30;
        else if(strcmp(s1, "OCT")==0)
            m=31;
        else if(strcmp(s1, "NOV")==0)
            m=30;
        else if(strcmp(s1, "DEC")==0)
            m=31;
        if(strcmp(s2, "SUN")==0)
            j=1;
        else if(strcmp(s2, "MON")==0)
            j=2;
        else if(strcmp(s2, "TUE")==0)
            j=3;
        else if(strcmp(s2, "WED")==0)
            j=4;
        else if(strcmp(s2, "THU")==0)
            j=5;
        else if(strcmp(s2, "FRI")==0)
            j=6;
        else if(strcmp(s2, "SAT")==0)
            j=7;

        m=m+j;
        for(j; j<m; j++)
        {
            if(j%7==6 || j%7==0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
