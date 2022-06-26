#include<stdio.h>
#include<stdlib.h>
int m,n;

int rowsum(int a[m][n],int i){
int sum=0,j;
for(j=0;j<n;j++)
    sum=sum+a[i][j];
return sum;       
}

int colsum(int a[m][n],int j){
int sum=0,i;
for(i=0;i<m;i++)
    sum=sum+a[i][j];
return sum;       
}

int main(){
int i,j;
printf("enter no of rows and columns\n");
scanf("%d%d",&m,&n);
int A[m][n];
printf("enter %d elements of matrix A\n",m*n);
for(i=0;i<m;i++)
   for(j=0;j<n;j++)
      scanf("%d",&A[i][j]);
printf("matrix A(%d*%d) \n",m,n);
for(i=0;i<m;i++){
   for(j=0;j<n;j++)
      printf("%d\t",A[i][j]);
   printf("\n"); 
   }
printf("\n\"row sum\"\n");
for(i=0;i<m;i++)
   printf("sum of row %d =%d\n",i+1,rowsum(A,i));
printf("\n\"column sum\"\n");
for(j=0;j<n;j++)
   printf("sum of column %d =%d\n",j+1,colsum(A,j));
return 0;
}      
