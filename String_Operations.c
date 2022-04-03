/*This is a program to perform various functions on strings*/
#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int ch;
    printf("1) Find the Length of String\n");
    printf("2) Concatenate two Strings\n");
    printf("3) Find Reverse of a string\n");
    printf("4) Copy one string to another\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch){
        case 1:
            printf("Enter your string : ");
            scanf("%s",string);
            int p,length=0;
            for (p = 0; string[p] != '\0'; p++)
            {
                length++;
            }
            printf("The length of %s = %d\n", string, length);
            break;
        case 2:
            printf("\n");
            char s1[100],s2[100];
            printf("Enter first String :");
            scanf("%s",s1);
            printf("Enter second String :");
            scanf("%s",s2);
            int i, j;
	        i = strlen(s1);
	        for (j = 0; s2[j] != '\0'; i++, j++) {
		        s1[i] = s2[j];
	        }
            s1[i] = '\0';
            printf("Concatenated String: %s",s1);
            break;

        case 3:
            printf("Enter your string : ");
            scanf("%s",string);
            int k,n=strlen(string);
            char temp;
            char revstring[100];
            for (k=0;k<(n/2);k++){
                temp=string[k];
                string[k]=string[n-1-k];
                string[n-1-k]=temp;
            }
            printf("Reversed String : %s",string);
            break;
        case 4:
            printf("Enter your string : ");
            scanf("%s",string);
            int a,ns=strlen(string);
            char newstring[100];
            for (a=0;a<ns;a++){
                newstring[a]=string[a];
            }
            printf("Original String : %s\n",string);
            printf("Copied String : %s",newstring);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}