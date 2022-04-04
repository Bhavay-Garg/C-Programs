/* This is a program to split an array from an index and then add the elemnts before the split to the back */
#include <stdio.h>

int main(){
    int n,i,s;
    printf("Enter number of elements you want to enter: ");
    scanf("%d",&n);
    int a[n],result[n];
    for(i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the index for spliting the array: ");
    scanf("%d",&s);

    if(s>=n){
        printf("Please enter an index less than the number of elements");
        return 0;
    }

    for(i=s;i<n;i++){
        result[i-s]=a[i];
    }

    for(i=0;i<s;i++){
        result[n-s+i]=a[i];
    }

    printf("output array: [");
    for (i=0;i<n;i++){
        printf("%d ,",result[i]);
    }
    printf("]");

    return 0;
}