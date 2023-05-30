#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,n; 
    scanf("%d",&n);
    int min,countmin = 0,max,countmax = 0;
    int *score = malloc(sizeof(int) * n);
    for(i = 0;i < n;i++)
       scanf("%d",&score[i]);
    min = max = score[0];
    for (i = 1; i < n; i++)
    {
        if (score[i] > max)
        {
            countmax++;
            max = score[i];
        }
        if (score[i] < min)
        {
            countmin++;
            min = score[i];
        }
    }
    printf("%d %d\n", countmax, countmin);
    return 0;
}
