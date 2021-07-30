#include<stdio.h>
void main(){
int a[100],n,key,i,low,mid,high;
printf("enter no of elements\n");
scanf("%d",&n);
printf("enter array elements\n");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
printf("entered elements are\n"); 
 for(i=0;i<n;i++){
 printf("%d\t",a[i]);
 }
printf("enter key element\n");
scanf("%d",&key);
 low=0;
 high=n-1;
while(low<=high){
 mid=(low+high)/2;
   if(key==a[mid]){
     printf("key element is found at the position %d\n",mid+1);
     break;
     }
   else if (key<a[mid])
     high=mid-1;
   else
     low=mid+1;  
}  
if(low>high){
printf("search is unsuccessful,key not found\n");
}
}
