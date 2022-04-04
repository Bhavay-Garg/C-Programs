/* This is a program to print spiral of a Matrix*/
#include <stdio.h>

int main(){
    int a,b,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns: ");
    scanf("%d",&b);

    int m[a][b];
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter element %d%d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    int rb=0,re=a-1,cb=0,ce=b-1;

    while(rb<=re&&cb<=ce){
        for (i=cb;i<=ce;i++){
            printf("%d ",m[rb][i]);
        }
        rb++;
        for (i=rb;i<=re;i++){
            printf("%d ",m[i][ce]);
        }
        ce--;
        if (rb<re){
            for (i=ce;i>=cb;i--){
                printf("%d ",m[re][i]);
            }
            re--;
        }

        if (cb<ce){
            for(i=re;i>=rb;i--){
                printf("%d ",m[i][cb]);
            }
            cb++;
        }
    }

    return 0;
}