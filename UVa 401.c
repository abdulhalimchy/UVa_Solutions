#include<stdio.h>
#include<string.h>
void rev(char a[])
{
    int i, j;
    char a2[100];
    strcpy(a2, a);
    for(i=strlen(a)-1, j=0; i>=0; i--, j++)
    {
        a[j]=a2[i];
    }
}
int main()
{
    int i, j, k, a, len, p;
    char s1[100], s2[100];
    while(scanf("%s", s1)==1)
    {
        k=0;
        a=1;
        strcpy(s2, s1);
        rev(s2);
        if(strcmp(s1, s2)==0)
            k=1;
        len=strlen(s1);
        for(p=0; s1[p]!=NULL; p++)
        {
            if(s1[p]=='A' || s1[p]=='E' || s1[p]=='H' || s1[p]=='I' || s1[p]=='J' || s1[p]=='L' || s1[p]=='M' || s1[p]=='O' || s1[p]=='S' || s1[p]=='T' || s1[p]=='U' || s1[p]=='V' || s1[p]=='W' || s1[p]=='X' || s1[p]=='Y' || s1[p]=='Z' || s1[p]=='1' || s1[p]=='2' || s1[p]=='3' || s1[p]=='5' || s1[p]=='8')
                a=1;
            else{
                a=0;
                break;
            }
        }
        if(a==1)
        {
            if(len%2==0)
            {
                i=(len/2)-1;
                j=len/2;
                for(i,j; j<len; i--,j++)
                {
                    if((s1[i]=='E' && s1[j]!='3') || (s1[i]=='3' && s1[j]!='E'))
                    {
                        a=0;
                        break;
                    }
                    else if((s1[i]=='J' && s1[j]!='L') || (s1[i]=='L' && s1[j]!='J'))
                    {
                        a=0;
                        break;
                    }
                    else if((s1[i]=='S' && s1[j]!='2') || (s1[i]=='2' && s1[j]!='S'))
                    {
                        a=0;
                        break;
                    }
                    else if((s1[i]=='Z' && s1[j]!='5') || (s1[i]=='5' && s1[j]!='Z'))
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='A' && s1[j]!='A')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='H' && s1[j]!='H')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='I' && s1[j]!='I')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='M' && s1[j]!='M')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='O' && s1[j]!='O')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='T' && s1[j]!='T')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='U' && s1[j]!='U')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='V' && s1[j]!='V')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='W' && s1[j]!='W')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='X' && s1[j]!='X')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='Y' && s1[j]!='Y')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='1' && s1[j]!='1')
                    {
                        a=0;
                        break;
                    }
                    else if(s1[i]=='8' && s1[j]!='8')
                    {
                        a=0;
                        break;
                    }
                }

            }
            else if(len%2==1)
            {
                if(s1[len/2]!='E' && s1[len/2]!='J' && s1[len/2]!='L' && s1[len/2]!='S' && s1[len/2]!='Z' && s1[len/2]!='2' && s1[len/2]!='3' && s1[len/2]!='5')
                {
                    i=(len/2)-1;
                    j=(len/2)+1;
                    for(i,j; j<len; i--,j++)
                    {
                        if((s1[i]=='E' && s1[j]!='3') || (s1[i]=='3' && s1[j]!='E'))
                        {
                            a=0;
                            break;
                        }
                        else if((s1[i]=='J' && s1[j]!='L') || (s1[i]=='L' && s1[j]!='J'))
                        {
                            a=0;
                            break;
                        }
                        else if((s1[i]=='S' && s1[j]!='2') || (s1[i]=='2' && s1[j]!='S'))
                        {
                            a=0;
                            break;
                        }
                        else if((s1[i]=='Z' && s1[j]!='5') || (s1[i]=='5' && s1[j]!='Z'))
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='A' && s1[j]!='A')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='H' && s1[j]!='H')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='I' && s1[j]!='I')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='M' && s1[j]!='M')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='O' && s1[j]!='O')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='T' && s1[j]!='T')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='U' && s1[j]!='U')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='V' && s1[j]!='V')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='W' && s1[j]!='W')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='X' && s1[j]!='X')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='Y' && s1[j]!='Y')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='1' && s1[j]!='1')
                        {
                            a=0;
                            break;
                        }
                        else if(s1[i]=='8' && s1[j]!='8')
                        {
                            a=0;
                            break;
                        }
                    }
                }
                else
                    a=0;
            }
        }
        if(k==1 && a==1)
            printf("%s -- is a mirrored palindrome.\n\n", s1);
        else if(k==1)
            printf("%s -- is a regular palindrome.\n\n", s1);
        else if(a==1)
            printf("%s -- is a mirrored string.\n\n", s1);
        else if(k==0 && a==0)
            printf("%s -- is not a palindrome.\n\n", s1);
    }
    return 0;
}
