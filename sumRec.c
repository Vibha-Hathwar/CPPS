/*print all natural no between 1 to n using recursions*/
#include <stdio.h>
void print(int i, int n)
{
   if(i<=n){
    printf("%d\t",i);
    print(i+1,n);
   }
   return;
}
void main ()
{
  int s;
  printf("Enter the number\n");
  scanf("%d",&s);
  print(1,s);
  printf("\n");
}






/*sum of all natural no between 1 to n using recursion*/
#include<stdio.h>
int sum(int n)
{
   int s=0;
   if(n==0)
       return s;
   s= sum(n-1)+n;
       return s;
}
void main()
{
  int s,n;
  printf("Enter number\n");
  scanf("%d",&n);
  s=sum(n);
  printf("Sum is %d\n",s);
}



/*print reverse of a no using recursion*/

#include<stdio.h>
int rev(int reverse,int n)
{
    int dig;
    dig = n%10;
    reverse = reverse*10 + dig;
    if(n/10!=0)
        reverse = rev(reverse,n/10);
    return reverse;
}

void main(){
    int reverse=0,n;
    printf("Enter number\n");
    scanf("%d",&n);
    reverse = rev(reverse,n);
    printf("%d\n",reverse); 
}


/*sum of digits of a no using recursion*/
#include<stdio.h>
int sumRec(int n)
{
    int i;
    i = n % 10;
    n = n/10;
    if(n!=0)
        i= i+ sumRec(n);
    return i;
}
void main()
{
    int sum=0,n;
    printf("Enter number\n");
    scanf("%d",&n);
    sum = sumRec(n);
    printf("%d\n",sum);
}






/*print even and odd nos in a range*/

#include <stdio.h>
void even(int m,int n)
{
   if(n>=m)
   {
    if(n%2==0)
        printf("%d\t",n);
    even(m,n-1);
   }
   return;
}
void odd(int m, int n)
{
   if(n>=m)
   {
    if(n%2!=0)
        printf("%d\t",n);
    odd(m,n-1);
   }
   return;
}

void main ()
{
  int m,n;
  printf("Enter the range\n");
  scanf("%d%d",&m,&n);
  printf("Odd numbers are:");
  odd(m,n);
  printf("\nEven numbers are:");
  even(m,n);
  printf("\n");
}

