#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, carry, digits[1000] = {0};
    scanf("%d", &n);

    digits[0] = 1; 
    j = 0; 

    for (i = 2; i <= n; i++)
    {
        carry = 0;
        for (int k = 0; k <= j; k++)
        {
            int temp = digits[k] * i + carry;
            digits[k] = temp % 10;
            carry = temp / 10;
        }
        while (carry)
        {
            digits[++j] = carry % 10;
            carry /= 10;
        }
    }

    for (i = j; i >= 0; i--)
    {
        printf("%d", digits[i]);
    }

    return 0;
}