/* This is a program to replace a word in a file */
#include<stdio.h>
#include <string.h>
int main(){
    FILE *ifp;
    FILE *ofp;
    ifp=fopen("Replace_Word.txt","r");
    ofp=fopen("New_Word.txt","w");
    if (ifp == NULL|| ofp == NULL)
    {
        printf("Cannot open file \n");
        return 0;
    } 
    
    char word[100],replace[100],read[100];
    printf("Enter the word to find :");
    scanf("%s",word);
    printf("Enter the word to replace it with:");
    scanf("%s",replace);

    rewind(ifp); 
    while (!feof(ifp)){
        fscanf(ifp, "%s", read);
        if (strcmp(read, word) == 0){
            // for deleting the word
            strcpy(read, replace); 
        }
        fprintf(ofp, "%s ", read); 
    }
    rewind(ofp);
    while (1) {
        char ch = fgetc(ofp);
        if (ch == EOF) { break; }
        printf("%c", ch); }
    fclose(ifp);
    fclose(ofp);
    printf("Replace Successful");

    return 0;    
}