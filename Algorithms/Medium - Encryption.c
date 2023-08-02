#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[90];
    scanf("%s", s);

    char encrypted_s[90];

    int length = 0;
    for(int i = 0; i < strlen(s) ; i++)
    {
        if(' ' != s[i])
            encrypted_s[length++] = s[i];
    }
    encrypted_s[length] = '\0';

    int col = ceil(sqrt(length));
    int row = floor(sqrt(length));

    int index = 0;
    for(int i = 0 ; i < col ; i++)
    {
        for(int j = i ; j < length ; j+=col)
        {
             s[index++] = encrypted_s[j];
        }
        s[index++] = ' ';
    }
    s[index] = '\0';

    printf("%s", s);
}
