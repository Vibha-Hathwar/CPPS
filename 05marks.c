#include<stdio.h>
void main (){
int n1,n2,n3,n4,n5,n6,sum;
float p;
printf("enter 6 sub marks out of 100\n");
scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
sum=n1+n2+n3+n4+n5+n6;
p=((float)sum/600)*100;
printf("total=%d,percentage=%-4.2f\%c \n",sum,p,'%');
}
