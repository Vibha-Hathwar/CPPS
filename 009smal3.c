#include<stdio.h>
void main(){
int a,b,c;
printf("enter 3 n0\n");
scanf("%d%d%d",&a,&b,&c);
(a>b)?((b>c)?printf("%d\n",c):printf("%d\n",b)):((a>c)?printf("%d\n",c):printf("%d\n",a));
}
