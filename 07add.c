#include<stdio.h>
void main(){
int a;
int*ad=&a;
printf("enter a no\n");
scanf("%d",&a);
printf("a=%d, address=%ld \n",a,ad);
}
