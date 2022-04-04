/* This program is used to count duplicate elemets in an array */
#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number of elements for the array: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
    }

    printf("Total number of duplicate elements in the array: %d",count);

    return 0;
}