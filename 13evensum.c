#include <stdio.h>
int main(){
int i,n,sum=0;
printf("enter no\n");
scanf("%d",&n);
i=2;
 while(i<=n){
 sum=sum+i;
 i+=2;
 }
printf("sum of even no between 2 to %d is %d\n",n,sum); 
}

