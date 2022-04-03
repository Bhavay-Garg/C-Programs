/* This program counts the total number of Uppercase letters, Lowercase letters, digits and Special charecters in a file*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    int upper=0,lower=0,special=0,digit=0;
    FILE *fp;
    fp=fopen("char_file.txt","r");
    a=fgetc(fp);
    while (a!=EOF){
        if (isupper(a)){
            upper++;
        }
        else if (islower(a)){
            lower++;
        }
        else if (isdigit(a)){
            digit++;
        }
        else if (!isalnum(a)&&!isspace(a)){
            special++;
        }
        a=fgetc(fp);
    }
    printf("Number of Upper Case Charecters : %d\n",upper);
    printf("Number of Lower Case Charecters : %d\n",lower);
    printf("Number of Digits : %d\n",digit);
    printf("Number of Special Charecters : %d\n",special);
    return 0;
}