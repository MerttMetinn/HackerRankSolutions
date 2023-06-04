#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int arr[size-1];

    int sum=0;

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}
