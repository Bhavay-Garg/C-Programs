/* This program finds the sum of Harmonic Series*/
#include <stdio.h>

int main(){
    int n;
    float sum,i=0.0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int j=i;
        printf("1/%d + ",j);
        sum+=1/i;
    }
    printf("\n");
    printf("Sum = %f",sum);
    return 0;
}