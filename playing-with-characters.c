#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[10];
    char sen[20];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", &s);
    printf("%s\n", s);
    getchar();
    fgets(sen, 20, stdin);
    printf("%s", sen);
    

  
    return 0;
}
