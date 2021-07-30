#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,temp;
int *p1,*p2;

printf("enter the number of elements\n");                    
scanf("%d",&n);
  int a[n];
  p1=p2=a;
printf("\nenter %d elements for array\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    if(a[i] < *p1)
       p1 = &a[i];
    if(a[i] > *p2)
       p2=&a[i];
    }
printf("\narray elements before swapping largest and smallest elements\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
printf("\nsmallest element in an array %d\n",*p1);
printf("largest element in an array %d\n",*p2);
    temp= *p1;
    *p1 = *p2;
    *p2 = temp;
printf("\narray elements after swapping largest and smallest elements\n");
for(i=0;i<n;i++){
   printf("%d\t",a[i]);
   }
}   
