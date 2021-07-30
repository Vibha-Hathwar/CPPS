#include<stdio.h>
void main(){
int a[100],n,i,j,temp;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
printf("entered elements are\n"); 
 for(i=0;i<n;i++){
 printf("%d\t",a[i]);
 }
for(i=0;i<n;i++){
  for(j=0;j<n-1-i;j++){
     if(a[j]>a[j+1]){
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
  }
} 
printf("array elements after sorting\n");
for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}   
