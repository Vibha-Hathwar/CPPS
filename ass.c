//assignment 1



//area of circle
#include<stdio.h>
#define PI 3.141
int main()
{
  int r;
  float A;
  printf("enter radius\n");
  scanf("%d",&r);
  A=PI*r*r;
  printf("area of circle=%f\n",A);
}



//area of triangle
#include<stdio.h>
#include<math.h>
void main()                  
{
  int a,b,c;
  float s,A;
  printf("enter length of sides of triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  s=(float)(a+b+c)/2;
  A=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle =%f\n",A);
}


//circumference of circle 
#include<stdio.h>
#define pi 3.1412
void main ()
{
  float r,c;
  printf("enter radius\n");
  scanf("%f",&r);
  c=pi*2*r;
  printf("circumference=%-4.4f\n",c);
}



//swap 2 nos
#include<stdio.h>
void main ()
{
  int a,b,c;
  printf("enter 2 nos\n");
  scanf("%d%d",&a,&b);
  printf("a=%d,b=%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("a=%d,b=%d\n",a,b);
}



//total marks and percentage of a student
#include<stdio.h>
void main ()
{
  int n1,n2,n3,n4,n5,n6,sum;
  float p;
  printf("enter 6 sub marks out of 100\n");
  scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
  sum=n1+n2+n3+n4+n5+n6;
  p=((float)sum/600)*100;
  printf("total=%d,percentage=%-4.2f\%c \n",sum,p,'%');
}



//temperature to celsius
#include<stdio.h>
void main()
{
  float f,c;
  printf ("enter temp in farn\n");
  scanf("%f",&f);
  c= (f-32)*(5.0/9);
  printf("%.3f\n",c);
}



//address of variable
#include<stdio.h>
int main()
{
  int a;
  printf("enter a no\n");
  scanf("%d",&a);
  printf("adress of variable a %p\n",&a);
}



//avgerage of 3 no
#include<stdio.h>
#include<stdlib.h>
int main ()
{
  int a,b,c;
  float avg;
  printf ("enter 3 values\n");
  scanf("%d%d%d",&a,&b,&c);
  avg=(a+b+c)/3;
  printf("average of 3 numbers=%f\n",avg);
}




//area of equilateral triangle
#include<stdio.h>
#include<math.h>
void main ()
{
  int a;
  float A;
  printf("enter side length\n");
  scanf("%d",&a);
  A=sqrt(3)/4*a*a;
  printf("area of equilateral triangle=%.3f\n",A);
}



//area of rectangle
#include<stdio.h>
void main()
{
  int l,b,A;
  printf("enter length and breadth\n");
  scanf("%d%d",&l,&b);
  A=l*b;
  printf("area of rectangle=%d\n",A);
}


//basic airthmetic operations
#include<stdio.h>
void main ()
{
  int a,b,s,d,p,q;
  printf("enter 2 nos\n");
  scanf("%d%d",&a,&b);
  s=a+b;
  d=a-b;
  p=a*b;
  q=a/b;
  printf("sum=%d\t difference=%d\t product=%d\t quotient=%d\n",s,d,p,q);
}



//simple and compound intrest
#include<stdio.h>
#include<math.h>
void main()
{
  float p,r,t,s,c;
  printf("enter p,r,t\n");
  scanf("%f%f%f",&p,&r,&t);
  s=(p*r*t)/100;
  c=(p*pow(1+(r/100),t))-p;
  printf("SI=%-.3f,CI=%-.3f\n",s,c);
}

