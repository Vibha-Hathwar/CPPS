//  DS
//  array manipulation
#include<stdio.h>
int main()
{
    int n,q;
    int v,l,r,i,count=0,max=0;
    int a[100]={0},b[100]={0};
    scanf("%d%d",&n,&q);
    for(i=0;i<q;i++)
    {
        scanf("%d%d%d",&l,&r,&v);
        b[l-1]+=v;
        b[r]-=v;
    }
    for(i=0;i<n;i++)
    {
        count+=b[i];
        a[i]=count;
        if(count>max)
            max=count;
    }
    printf("%d\n",max);
    return 0;
}
