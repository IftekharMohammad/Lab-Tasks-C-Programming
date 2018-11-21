#include<stdio.h>

int getWordCount(char *str);
int main(){
    char *stringName[100];
    puts("Enter The String");
    gets(stringName);
    int number = getWordCount(stringName);
    printf("The Word Count Is %d",number);

}
int getWordCount(char *str){
    int i,count=1;
    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            if(str[i]==' '){
                count++;
            }
        }else{
            count = 0;
        }
    }
        return count;
    }

