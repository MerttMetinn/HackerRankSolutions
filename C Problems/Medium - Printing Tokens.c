#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    fgets(arr,100,stdin);

    for(int i=0 ; i<strlen(arr) ; i++)
    {
        if(arr[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",arr[i]);
        }
    }
    return 0;
}
