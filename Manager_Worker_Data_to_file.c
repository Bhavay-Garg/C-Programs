/* This program takes data of managers and workers from the user and stores them in seperate files */
#include <stdio.h>

int main(){
    char wname[100],mname[100];
    int w,m,wsalary,msalary,i,j;
    printf("Enter the number of Workers:");
    scanf("%d",&w);
    printf("Enter the number of Managers:");
    scanf("%d",&m);
    FILE *fp1, *fp2;
    fp1 = fopen("w.txt","w");
    fp2 = fopen("m.txt","w");
    
    if( fp1 == NULL)
    {
        printf("\nError");
    }
    if( fp2 == NULL)
    {
        printf("\nError");
    } 

    for(i=0; i<w; i++)
    {
    printf("\nEnter Worker Name%d:",i+1);
    scanf("%s",wname);
    printf("Enter Salary of Worker%d:",i+1);
    scanf("%d",&wsalary);
    fprintf(fp1,"\nWorker Name:%s\nSalary:%d\n",wname,wsalary);
    }

    for(j=0 ;j<m; j++)
    {
    printf("\nEnter Manager name%d:",j+1);
    scanf("%s",mname);
    printf("Enter salary of Manager%d:",j+1);
    scanf("%d",&msalary);
    fprintf(fp2,"\nManager Name:%s\nSalary:%d\n",mname,msalary);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}