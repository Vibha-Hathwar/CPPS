#include<stdio.h>
int main(){
int n1,n2,n3,res;
printf("enter 3 nos\n");
scanf("%d%d%d",&n1,&n2,&n3);

 res=((n1>n2)?((n1>n3)?n1:n3):(n2>n3)?n2:n3);
 printf("biggest no is%d\n",res);
}
