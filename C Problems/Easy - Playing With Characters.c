#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100

int main()
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &ch);

    while(getchar() != '\n');

    scanf("%s", s);

    while(getchar() != '\n');

    scanf("%[^\n]%*c", sen);


    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);

    return 0;
}
