#include<stdio.h>
#include<stdlib.h>
void main (){
int a[80],n,i,*p,sum=0;
printf("enter no of elements\n");
scanf("%d",&n);
 p=a;
printf("enter array elements\n"); 
for(i=0;i<n;i++){
    scanf("%d",p);
    p++;
   }
 p=a;
printf("array elements are\n"); 
for(i=0;i<n;i++){
    printf("%d\t",*p);
    p++;
    }
p=a;
for(i=0;i<n;i++){
   sum=sum+*p;
   p++;
   }
printf("\n sum of array elements is %d\n",sum);   
}
