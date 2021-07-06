#include<stdio.h>
#include<math.h>
void main(){
int a,b,c;
float s,A;
printf("enter length of sides of triangle\n");
scanf("%d%d%d",&a,&b,&c);
s=(float)(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area =%f\n",A);
}
