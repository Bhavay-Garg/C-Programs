/* This program is for finding the gross salary as per given parameters */
#include <stdio.h>

int main(){
    int sal,hra,da,gross_sal;
    printf("Enter your Basic Salary: ");
    scanf("%d",&sal);
    if (sal<=10000){
        hra=0.2*sal;
        da=0.8*sal;
    }else if(sal<=20000){
        hra=0.25*sal;
        da=0.9*sal;
    }else{
        hra=0.3*sal;
        da=0.95*sal;
    }
    printf("HRA is %d\n",hra);
    printf("DA is %d\n",da);
    gross_sal=sal+hra+da;
    printf("Gross salary is : %d",gross_sal);
    return 0;
}