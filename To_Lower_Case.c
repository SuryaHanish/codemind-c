#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100];
    scanf("%[^
]s",a1);
    int i,l=strlen(a1);
    for(i=0;i<l;i++)
    {
        switch(a1[i])
        {
            case 'A': a1[i]='a'; break;
            case 'B': a1[i]='b'; break;
            case 'C': a1[i]='c'; break;
            case 'D': a1[i]='d'; break;
            case 'E': a1[i]='e'; break;
            case 'F': a1[i]='f'; break;
            case 'G': a1[i]='g'; break;
            case 'H': a1[i]='h'; break;
            case 'I': a1[i]='i'; break;
            case 'J': a1[i]='j'; break;
            case 'K': a1[i]='k'; break;
            case 'L': a1[i]='l'; break;
            case 'M': a1[i]='m'; break;
            case 'N': a1[i]='n'; break;
            case 'O': a1[i]='o'; break;
            case 'P': a1[i]='p'; break;
            case 'Q': a1[i]='q'; break;
            case 'R': a1[i]='r'; break;
            case 'S': a1[i]='s'; break;
            case 'T': a1[i]='t'; break;
            case 'U': a1[i]='u'; break;
            case 'V': a1[i]='v'; break;
            case 'W': a1[i]='w'; break;
            case 'X': a1[i]='x'; break;
            case 'Y': a1[i]='y'; break;
            case 'Z': a1[i]='z'; break;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",a1[i]);
    }
}
