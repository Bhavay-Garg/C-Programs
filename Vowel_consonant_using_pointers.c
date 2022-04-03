/*This program takes a string from the user and prints the number of vowels and consonants in it using pointers*/
#include <stdio.h>

int main()
{
    char str[100];
    char *ch;
    int vowcount = 0, conscount = 0;

    printf("Please Enter String to Count Vowels and Consonants: ");
    scanf("%s",str);

    ch = str;
    
    while(*ch != '\0')
    {
        if(*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' ||
		*ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')  
        {
            vowcount++;
        }
        else{
            conscount++;
        }
        ch++;
    }
    
	printf("Total Vowels     = %d\n", vowcount);
    printf("Total Consonants = %d\n", conscount);
}