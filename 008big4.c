#include<stdio.h>
int main(){
 int n1,n2,n3,n4,res;
 printf("enter 4 nos\n");
 scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 
 (n1>n2)?((n3>n4)?((n3>n1)?printf("%d",n3):printf("%d",n1)):((n1>n4)?printf("%d",n1):printf("%d",n4))):((n3>n4)?((n3>n2)?printf("%d",n3):printf("%d",n2)):((n2>n4)?printf("%d",n2):printf("%d",n4)));
 
 }
 
 /*if(n1>n2){
    if(n3>n4){
        if(n1>n3)
            printf(n1);
        else
            printf(n3);
    }
    else{
        if(n1>n4)
            printf(n1);
        else
            printf(n4);
    
    }
 }
 else{
    if(n3>n4){
        if(n2>n3)
            printf(n2);
        else
            printf(n3);
    }
    else{
        if(n2>n4)
            printf(n2);
        else
            printf(n4);
    
    }
}*/

