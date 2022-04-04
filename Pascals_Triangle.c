/* This program prints the pascals triangle for the number of rows entered by the user*/
#include <stdio.h>

int main(){
    int n,i,j,space,coeff;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        
        for (space=0;space<=n-i;space++){
            printf("  ");
        }
        
        
        for (j=0;j<=i;j++){
            if (j==0||i==0){
                coeff=1;
            }else{
                coeff=coeff*(i-j+1)/j;
            }

            printf("%4d",coeff);
        }
        printf("\n");
    }

    return 0; 
}