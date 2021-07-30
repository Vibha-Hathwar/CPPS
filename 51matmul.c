#include<stdio.h>
#include<stdlib.h>
int main (){                                      //error
int m,n,p,q,i,j,k;
printf("enter no of rows ,columns for A");
scanf("%d%d",&m,&n);
printf("enter no of rows ,columns for B");
scanf("%d%d",&p,&q);
if(n!=p){
  printf("matrix multiplication is not possible\n");
  exit(0);
  }
int a[m][n],b[p][q],c[m][q];
printf("enter %d elements of matrix A\n",m*n);
  for(i=0;i<m;i++){
     for(j=0;j<n;j++){
       scanf("%d",&a[i][j]);
     }
  }
printf("enter %d elements of matrix B\n",p*q);
  for(i=0;i<p;i++){
     for(j=0;j<q;j++){
       scanf("%d",&b[i][j]);
     }
  }
for(i=0;i<m;i++){
   for(j=0;j<q;j++){
   c[i][j]=0;
      for(k=0;k<p;k++){
      c[i][j]=c[i][j]+a[i][j]*b[k][j];
      }
   } 
printf("matrix A(%d*%d):\n",m,n);
  for(i=0;i<m;i++){
     for(j=0;j<n;j++){
     printf("%6d",a[i][j]);
     }
     printf("\n");
  }
printf("matrix B(%d*%d):\n",p,q);
  for(i=0;i<p;i++){
     for(j=0;j<q;j++){
     printf("%6d",b[i][j]);
     }
     printf("\n");
  }
printf("matrix c(%d*%d):\n",m,q);
  for(i=0;i<m;i++){
     for(j=0;j<q;j++){
     printf("%6d",c[i][j]);
     }
     printf("\n");
  }      
}}
