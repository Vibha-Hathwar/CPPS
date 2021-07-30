#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
char str[80];
int i,vowel=0,cons=0;
printf("enter a string\n");
gets(str);
for(i=0;str[i]!='\0';i++){
    if(isalpha(str[i])){
         if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||    str[i]=='U'){
         vowel++;
        }else{
         cons++;
         }   
      }
   }
printf("number of vowels are %d\n",vowel);
printf("number of consonants are %d\n",cons);
}
