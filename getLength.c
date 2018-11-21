#include<stdio.h>
int getLength(char *str);
int main(){
    char *stringName[100];
    puts("Enter The String");
    gets(stringName);
    int countLength;
    countLength = getLength(stringName);
    printf("The Length Of The String Is %d", countLength);
}
int getLength(char *str){
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
