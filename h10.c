#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,n,q; 
    char *N[10],*Q[10];
    scanf("%d",&n);
    int ar[n];
    char s[20];
    for(i=0;i<n;i++)
    {
        scanf("%s",s); 
        N[i]=malloc(20);
        strcpy(N[i],s);
    }
    scanf("%d",&q);    
    for(i=0;i<q;i++)
    {
        int occurs = 0, result;
        scanf("%s",s);
        Q[i]=malloc(20);
        strcpy(Q[i],s);
        for(j=0;j<n;j++)
        {
            result=strcmp(Q[i],N[j]);
            if(result==0) 
                occurs++;
        }
        ar[i]=occurs;
    }
    printf("\n");
    for (i=0;i<q;i++)
        printf("%d\n",ar[i]);
    return 0;
}
