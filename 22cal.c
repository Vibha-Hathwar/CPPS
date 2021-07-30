#include<stdio.h>
#include<stdlib.h>

void main(){
float n1,n2,r;
char op;
printf("enter an airthmetic operation\n");
scanf("%f%c%f",&n1,&op,&n2);

switch(op){
case '+':
r=n1+n2;
break;
case '-':
r=n1-n2;
break;
case '*':
r=n1*n2;
break;
case '/':
if(n2==0){
printf("\n error: division by 0\n");
}
r=n1/n2;
break;
default :
printf("\nerror: invalid operator. enter + - * / only\n");
}
printf("\n %f%c%f=%f\n",n1 ,op,n2,r);
} 
