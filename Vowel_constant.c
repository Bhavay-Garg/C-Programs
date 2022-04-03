/*This program takes a letter from the user and prints if it is a vowel or a consonant*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[1];
    printf("Enter a letter: ");
    scanf("%s",a);
    if (!strcmp(a,"a")||!strcmp(a,"e")||!strcmp(a,"i")||!strcmp(a,"o")||strcmp(a,"u")){
        printf("The letter you entered is a Vowel");
    }else{
        printf("The Letter you entered is a consonant");
    }
    return 0;
}