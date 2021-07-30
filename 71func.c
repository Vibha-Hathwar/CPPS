/*Develop a C program to perform the following operations using funcions:
i) Read n elements into an array
ii) Print the contents of an array
iii) Sort an array of n elements using selection sort technique*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void readarray(int a[], int n);
void displayarray(int a[], int n);
void selectionsort(int a[], int n);

int main()
{
	int a[100],n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	readarray(a,n);
	printf("\n unsorted array is\n");
	displayarray(a,n);
	selectionsort(a,n);
	printf("\n sorted array is\n");
	displayarray(a,n);
	return 0;
}

void readarray(int a[], int n){
int i;
printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void selectionsort(int a[], int n){
	int i, j, pos, temp;
	for(i=0;i<n;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[pos])
				pos=j;
	   }temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}
void displayarray(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}






















/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void readarray(int a[],int n);                 /*error*/
/*void displayarray(int a[],int n);
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
  printf("%d\t",&a[i]);
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
}*/
