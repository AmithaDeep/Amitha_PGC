#include <stdio.h>

int main()
{
    int i,j,n,s,r,t=1;
    printf("Enter maximum width: ");
    scanf("%d",&n);
    s=n/2;
    //printf("%d",s);
    for(r=0;r<(n/2)+1;r++)
    {
        for(i=0;i<s;i++)
        {
            printf(" ");
        }
        s--;
        for(j=0;j<t;j++)
        {
            printf("*");
        }
        t=t+2;
        printf("\n");
    }
    t=t-4;
    s=1;
    for(r=0;r<(n/2);r++)
    {
        for(i=0;i<s;i++)
        {
            printf(" ");
        }
        s++;
        for(j=0;j<t;j++)
        {
            printf("*");
        }
        t=t-2;
        printf("\n");
    }
    
    return 0;
}
