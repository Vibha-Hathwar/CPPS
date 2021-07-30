#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
float a,b,c,r1, r2,real,imag,disc;

printf("enter coefficients of quadratic equation\n");
scanf("%f%f%f",&a,&b,&c);

if (a==0){
  printf("not a quadratic equation");
  exit(0);
  }
  disc=b*b-(4*a*c);
  if(disc==0){
    r1=r2=b/(2*a);
    printf("roots are real.equal,r1=r2==%f\n",r1);
    }
  else if (disc=0){
    r1=-(b+sqrt(disc))/(2*a);
    r2=-(b-sqrt(disc))/(2*a);
    printf("roots are real and distinct\t r1=%f\tr2=%f\n",r1,r2);
   }   

else{
   real=-b/(2*a);
   imag=sqrt(fabs(disc))/(2*a);
   printf("roots are imaginary\tr1=%f+i%f\tr2=%f-i%f",real,imag,real,imag);
 }   
}
