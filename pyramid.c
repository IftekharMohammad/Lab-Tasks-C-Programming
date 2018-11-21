#include<stdio.h>
int main()
{
    int i,n,j;
    printf("\n Please Give The Value of N:  ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n-i;j>0;j--)
            printf(" ");
        for(j=2*i-1;j>0;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
