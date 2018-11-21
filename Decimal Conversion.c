#include<stdio.h>
int main()
{
    int a[100],x,y,z;
    printf("Enter Decimal number:\n");
    scanf("%d", &z);
    while(z!=0){
        for(x=0;x<a[100];x++){
            a[x]=z%2;
            z=z/2;
        }
    }
    for(y=100;y>=0;y--){
        printf("%d",a[y]);
    }
}
