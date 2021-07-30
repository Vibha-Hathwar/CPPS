#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
int m,n,i,j,prime;
printf("enter 2 int (intervals)");
scanf("%d%d",&m,&n);
 if(m<0||n<0||m>n){
 printf("invalid input\n");
 exit(0);
 }
printf("prime no between %d and %d are",m,n);
 for(i=m;i<n;i++){
 prime=1;
   for(j=2;j<=i/2;j++){
     if(i%j==0){
     prime=0;
     break;
     }
    }
  if(prime==1){
  printf("%d\t",i);
  }
 }
}
