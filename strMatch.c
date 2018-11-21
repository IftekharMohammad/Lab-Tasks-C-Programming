#include<stdio.h>

int strMatch(char *str1, char *str2);
int main(){
    char *stringName1[100];
    char *stringName2[100];
    puts("Enter The First String");
    gets(stringName1);
    puts("Enter The Second String");
    gets(stringName2);
    strMatch(stringName1,stringName2);
}
int strMatch(char *str1, char *str2){
    int i;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            return i+1;
        }
    }
    return 0;
}
