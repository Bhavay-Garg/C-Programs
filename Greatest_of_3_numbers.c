/* This program is for finding the biggest number among three numbers */
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first Number : ");
    scanf("%d",&a);
    printf("Enter second Number : ");
    scanf("%d",&b); 
    printf("Enter third Number : ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("The greatest number is %d",a);
        }else{
            printf("The greatest number is %d",c);
        }
    } else{
        if (b>c){
            printf("The greatest number is %d",b);
        }else{
            printf("The greatest number is %d",c);
        }
    }
    return 0;
}