/* This program is a basic example of implementation of a function */
#include <stdio.h>

void printit();

int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    printit(str);
    return 0;
}


void printit(char *s){
    printf("%s",s);
}