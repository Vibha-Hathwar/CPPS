#include <stdio.h>
int main(){
int i,n,sum=0;
printf("enter no\n");
scanf("%d",&n);
i=1;
 while(i<=n){
 sum=sum+i;
 i+=2;
 }
printf("sum of odd no between 1 to %d is %d\n",n,sum); 
}
