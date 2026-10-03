#include <string.h>
#include <stdlib.h>

char* addStrings(char* num1, char* num2)
{
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0;

    int n1 = strlen(num1);
    int n2 = strlen(num2);

    int size = (n1 > n2 ? n1 : n2) + 1;

    char *result = malloc(size + 1);

    result[size] = '\0';

    int k = size - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += num1[i--] - '0';

        if (j >= 0)
            sum += num2[j--] - '0';

        result[k--] = (sum % 10) + '0';

        carry = sum / 10;
    }

    return result + k + 1;
}