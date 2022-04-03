/* This program copies one file to the other*/
#include <stdio.h>

int main(){

    FILE *fp1;
    FILE *fp2;
    char f1[100],f2[100];
    char c;
    printf("Enter File Name for Reading: ");
    scanf("%s",f1);
    fp1=fopen(f1,"r");
    if (fp1 == NULL)
    {
        printf("Cannot open file %s \n", f1);
        return 0;
    } 
    printf("Enter File Name for Writing: ");
    scanf("%s",f2);
    fp2=fopen(f2,"w");
    
    c=fgetc(fp1);
    while (c!=EOF){
        fputc(c,fp2);
        c=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Files Copied Successfully");
    return 0;
}