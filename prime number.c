#include<stdio.h>
int main()
{
    int a,x,y,z;
    for(a=2;a<=100;a++){
        z=0;
        for(x=1;x<=a;x++){
            y=a%x;
            if(y==0){
                z++;
            }
        }
        if(z==2){
                printf("%d ", a);
            }
    }
    return 0;
}
