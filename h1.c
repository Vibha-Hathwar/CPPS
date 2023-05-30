//  PATTERN PRINTTING
// /*
#include<stdio.h>
int main()                                        //run agatte
{
  int n;
  printf("Enter n value: ");
  scanf("%d",&n);

  int len = 2*n-1;
  for(int row=0; row<len; row++)
  {
    for(int col=0; col<len; col++)
    {
      int min = row<col? row:col;
      min=min<len-row? min:len-row-1;
      min=min<len-col? min:len-col-1;
      printf("%d ",n-min);
    }
    printf("\n");
  }
  return 0;
}
// */


/******************************************************************************************/
// /*
#include<stdio.h>
#include<stdlib.h>                    //run agatte
#include<math.h>
int max(int a,int b)
{
   return a>b?a:b;
}
int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int max1,max2,max3;
    int len=2*n-1;
    // logic for pattern
    for(int i=1;i<=len;i++)
    {
        for(int j=1; j<=len; j++)
        {
            max1=max(i,2*n-i);
            max2=max(j,2*n-j);
            max3=max(max1,max2);
            printf("%d ",(max3-n)+1);
        }
        printf("\n");
    }
return 0;
}
// */

/***************************************************************************************/
// /*
#include <stdio.h>
#include <string.h>                      //run agatte
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n*2-1][n*2-1];
	//logic
    for(int c=0; c<n; c++)
        for(int i=c; i < n*2-1-c; i++)
            for(int j=c; j < n*2-1-c; j++)
                a[i][j] = n-c;
    //Displaying
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2-1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
// */

/************************************************************************************/
#include<stdio.h>
int main()                                      //run agatte
{
    int n;
    int i,j;
    scanf("%d", &n);
    int m[2*n-1][2*n-1];
    int k=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            m[i][j]=(n-i)>(n-j)?(n-i):(n-j);
        int k=j-2;
        for(j=n;j<2*n-1;j++)
            m[i][j]=m[i][k--];
    }
    int f=2;
    for(i=n;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
            m[i][j]=m[i-f][j];
        f+=2;
    }
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
    return 0;
}

/****************************************************************************************/
// /*
#include <stdio.h>
#include <stdlib.h>                             //run agatte
int main()
{
    //pattern printing
    printf("enter a no ");
    int i,j,k,m,n,x;
    scanf("%d",&n);
    printf("\n");
    k=n;
    m = n+(n-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                    printf("%d ",k);
                if(i>=1)
                {
                    if(j<i)
                        printf("%d ",k-j);
                    else if(j>=i && j<m-i)
                        printf("%d ",k-i);
                    else
                        printf("%d ",(j-k+1)+1);
                }
            }
            else if(i==n-1)
                if(j<n)
                    printf("%d ",k-j);
                else
                    printf("%d ",(j-k+1)+1);
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                    printf("%d ",k);
                if(j<x)
                    printf("%d ",k-j);
                else if(j>=x && j<m-x)
                    printf("%d ",k-x);
                else
                    printf("%d ",(j-k+1)+1);
           }
        }
        printf("\n");
    }
}// */
