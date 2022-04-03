/*This is a program to find the sum of a geometric progression*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,r,n,i;
    int sum=0;
    printf("Enter the firt term of the Geometric Series : ");
    scanf("%d",&a);
    printf("Enter the common ratio of the Geometric Series : ");
    scanf("%d",&r);
    printf("Enter the number of terms of the Geometric Series : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        sum=sum+a*pow(r,i);
    }
    printf("Sum of Geometric Series : %d",sum);
    return 0;
}