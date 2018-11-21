#include<stdio.h>
int main()
{
    int a,x,z;
    printf("Enter the highest number:\n");
    scanf("%d", &z);
    for(a=z;a>0;a--){
        char y = 'A';
        for(x=0;x<a;x++){
            printf("%c", y+x);
        }
        printf("\n");
    }
}
