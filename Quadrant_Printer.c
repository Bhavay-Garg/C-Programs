/* This program prints the quadrant of a point*/
#include <stdio.h>

int main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y; ");
    scanf("%d",&y);
    if ((x>=0)&&(y>=0)){
        printf("The point lies in the first Quadrant.");
    }else if((x<0)&&(y>=0)){
        printf("The point lies in the Second Quadrant.");
    }else if((x<0)&&(y<0)){
        printf("The point lies in the Third Quadrant.");
    }else if((x>=0)&&(y<0)){
        printf("The point lies in the Fouth Quadrant.");
    }
    return 0;
}