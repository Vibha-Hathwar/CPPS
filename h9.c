//  DS
//  left shift
#include <stdio.h>

int main() {
    int i,n,d; 
    scanf("%d%d",&n,&d);
    int *arr = malloc(sizeof(int) * n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    int *arr2=malloc(n*sizeof(int));
    int j=0;
    for(i=d;i<n;i++)
        arr2[j++]=arr[i];
    for(i=0;i<d;i++)
        arr2[j++]=arr[i];
    for(int i=0; i<n; i++)
        printf("%d ",arr2[i]);
    printf("\n");
    return 0;
}



