#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b)
{
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    int n = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

    char *result = malloc(n + 2);

    result[n + 1] = '\0';

    int k = n;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';

        carry = sum / 2;
    }

    return result + k + 1;
}