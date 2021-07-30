#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void readarray(int a[],int n);
void displayarray(int a[],int n);
void selectionsort(int a[],int n);

int main(){
    int a[100],n;
    printf("enter size of array\n");
    scanf("%d",&n);
    readarray(a,n);
    printf("unsorted array is\n");
    displayarray(a,n);
    selectionsort(a,n);
    printf("sorted array is\n");
    displayarray(a,n);
}

void readarray(int a[],int n){
int i;
printf("enter elements of array\n");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}

void displayarray(int a[],int n){
int i;
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
printf("\n");
}

void selectionsort(int a[],int n){
int i,j,pos,temp;
for(i=0;i<n;i++){
   pos=i;
   for(j=i+1;j<n;j++){
       if(a[j]<a[pos])
        pos=j;
       }
   temp=a[i];
   a[i]=a[pos];
   a[pos]=temp;
  }
}
