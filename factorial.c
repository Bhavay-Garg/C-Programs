/* This program is for finding factorial of a number */
#include<stdio.h>
int main(){
    int num, i;
    printf("Enter a number to calculate its factorial : ");
    scanf("%d",&num);
    long int fact=1;
    for (i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of the number is : %d",fact);
    return 0;
}