#include<stdio.h>
int main(){
int i,n,f=1;
printf("enter a no\n");
scanf("%d",&n);
 for(i=1;i<=n;i++){
 f=f*i;
 }
 printf("factorial of %d =%d\n",n,f);
} 
