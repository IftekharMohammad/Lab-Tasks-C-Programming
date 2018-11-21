#include <stdio.h>

int main()
{
    int a,b,i,j,k=0,l;
    printf("total no. of students:\n");
    scanf("%d", &a);
    printf("no. of courses each student is studying:\n");
    scanf("%d", &b);
    int c[a][b];
    for(i=0;i<a;i++){
        printf("Enter Student's Roll no. :\n");
        scanf("%d", & c[i][0]);
        for(j=0;j<b;j++){
            printf("Enter Student's Marks: \n");
            scanf("%d", & c[i][j]);
        }
    }
    for(i=0;i<a;i++){
        printf("Student's Roll no. is : %d\n", c[i][0]);
        for(j=0;j<b;j++){
             k+=c[i][j];
             l=k/2;
        }
        printf("Average  Marks: %d\n", l);

    }
    return 0;
}
