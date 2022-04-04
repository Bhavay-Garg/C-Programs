/* This program is used to count the frequency of all the digits in a number entered by the user*/
#include<stdio.h>

int main(){
    long int num;
    int i;
    int f[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        i=num%10;
        f[i]=f[i]+1;
        num=num/10;
    }
    for(i=0;i<10;i++){
        printf("Number of %d are %d.\n",i,f[i]);
    }
    return 0;
}