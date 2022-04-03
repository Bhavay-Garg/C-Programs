/* This program creates a sample file*/
#include <stdio.h>

int main(){
    FILE *fp;
    fp=fopen("char_file.txt","w");
    fprintf(fp,"This is a SamPLE Text 5556788\n");
    fclose(fp);
    return 0;
}