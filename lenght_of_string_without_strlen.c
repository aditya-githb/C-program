#include <stdio.h>
int main()
{
    int i;
    char s[100];
    
    printf("enter a sentence: \n");
    gets(s);

    for (i = 0; s[i] != '\0'; ++i);
        printf("%s: %d", s, i);
        
    return 0;
}