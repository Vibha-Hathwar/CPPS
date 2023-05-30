#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reverse array\nenter n and n elements\n\n");
    int num, *arr,i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);
    for(i = num-1; i >=0 ; i--)
        printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
