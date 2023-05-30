#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
    //Write your code here.
    int and = 0, or = 0, xor = 0;
    int a = 0,o = 0, x = 0;
    for (int i=1; i<=n; i++) 
        for (int j=i+1; j<=n; j++)
        {
            a = i & j;
            o = i | j;
            x = i ^ j;
            if (a>and && a<k)
                and = a;
            if (o>or && o<k)
                or = o;
            if (x>xor && x<k)
                xor = x;
        }
    printf("%d\n%d\n%d\n", and, or, xor);
}
int main()
{
    int n, k;
    printf("bitwise and or xor\nenter n and k\n\n");
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
