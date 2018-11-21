#include<stdio.h>
int main()
{
    int a,x=0,y=1,z,sum;
    printf("Enter the highest number:\n");
    scanf("%d", &z);
    for(a=2;a<=z;a++){
        sum=x+y;
        x=y;
        y=sum;
        printf("%d ", sum);
    }
}

