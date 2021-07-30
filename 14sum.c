#include <stdio.h>
int main(){
int i,n,sum=0;
printf("enter no\n");
scanf("%d",&n);
i=1;
 while(i<=n){
 sum=sum+i;
 i++;
 }
printf("sum of natural nos is %d\n",sum); 
}
