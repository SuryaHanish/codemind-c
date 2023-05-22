#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c=0;
    scanf("%d",&n);
    char a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        int l=strlen(a),c=0;
        for(j=0;j<l/2;j++) 
        {
            if(a[j]==a[l-j-1])
            {
                c++;
            }
        }
        if(c==l/2)
        {
            if(l%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
    }
}
