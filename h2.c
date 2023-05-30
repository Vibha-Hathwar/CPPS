#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("Enter a sentence\n\n");
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
            printf("%c",s[i]);
        else if(s[i]==' ')
            printf("\n");
    }
    printf("\n");
    return 0;
}
