#include <stdio.h>

int main()
{
    int i,j,a,b,c,n;
    printf("Enter maximum number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=0;
        b=1;
        for(j=0;j<=i;j++)
        {
            
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
    
    
    return 0;
}
