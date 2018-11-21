#include<stdio.h>

int getVowelCount(char *str);
int main(){
    char *stringName[100];
    puts("Enter The String");
    gets(stringName);
    int number = getVowelCount(stringName);
    printf("The Vowel Count Is %d",number);

}
int getVowelCount(char *str){
    int i,j,count=0;
    char vowel[]={'A','E','I','O','U','a','e','i','o','u'};
    int vowelArr = sizeof(vowel)/sizeof(char);
    for(i=0;str[i]!='\0';i++){
        for(j=0;j<vowelArr;j++){
            if(str[i]==vowel[j]){
                count++;
            }
        }
    }
    return count;
}
