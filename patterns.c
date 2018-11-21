#include <stdio.h>
int main()
{
    int h=5, row, col, colElements, colVal;

    //Loop for Row
    for(row=1; row<=h; row++){
    //Print space
    int s;
    for(s=0; s<=h-row; s++)
        printf(" ");

    colElements = 2*row-1;
    colVal = row;
    //for loop to print columns
    for(col=1; col<=colElements; col++){

    if(col<colElements/2+1)
        printf("%d", colVal++);
    else
        printf("%d", colVal--);

    }

    printf("\n");
    }


    return 0;
}
