/* This program is a exaple of implementation of pointers in C */
#include<stdio.h>
int main(){
    int n=10;  //Defining a variable
    int *p=&n; //This will store the address of variable n as the value for variable p which is a pointer
    printf("%d",p);  // This will print the value of pointer variable p
    return 0;
}