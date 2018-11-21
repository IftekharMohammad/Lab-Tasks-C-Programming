#include<stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int i,result=0;
     printf("%d %d\n", argc, atoi("45"));
    for(i=0;i<argc;i++){
        result+=atoi(*(argv+i));
         printf("%s\t", *(argv+i));
    }
    printf("\n%d", result);
}
