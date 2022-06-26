#include<stdio.h>
#include<stdlib.h>
int fact (int n){    
   if(n==0)             
     return 1;          
   else 
     return (n*fact(n-1));
}
int main(){
int n,r,res;
printf("enter value of n\n");
scanf("%d",&n);
printf("enter value of r\n");
scanf("%d",&r);
   if(n<r){
   printf("result doesnot exist\n");
   exit(0);
   }
res=(fact(n))/(fact(r)*fact(n-1));
printf("\n for n=%d,r=%d,nCr=%d\n", n,r,res);
}
