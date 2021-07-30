/*#include <stdio.h>
#include <stdlib.h>
int main(){                                         /*error--segmentation dumped*/      /*student */
/*int n,i,j,temp,A[n];                              
printf("Enter size of array:\n");
scanf("%d",&n);
printf("Enter elements of the array:\n");
  for(i=0;i<n;i++){
     scanf("%d",&A[i]);
    } i=0;j=n-1;
  for(i<j;i++;j--){
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
    }  
printf("The reversed array is \n");
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
   }
}*/


                                                          /*write ma'ams*/


#include <stdio.h>      
int main(){
int arr[100];                                            /*google*/
int n, i;
printf("Enter size of the array: ");
scanf("%d", &n);
printf("Enter elements in array: ");
for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
printf("\nArray in reverse order: ");
for(i = n-1; i>=0; i--){
       printf("%d\t",arr[i]);
    }
}
