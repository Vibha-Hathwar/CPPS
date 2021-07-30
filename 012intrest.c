#include<stdio.h>
#include<math.h>
void main(){
float p,r,t,s,c;
printf("enter p,r,t\n");
scanf("%f%f%f",&p,&r,&t);
s =(p*r*t)/100;
c=(p*pow(1+(r/100),t))-p;
printf("SI=%-.3f,CI=%-.3f\n",s,c);
}
