#include <stdlib.h>

int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    char *prime = calloc(n, sizeof(char));

    int count = 0;

    // 2 is prime
    count++;

    // Initially consider all odd numbers as prime
    for (int i = 3; i < n; i += 2)
        prime[i] = 1;

    // Mark non-primes
    for (int i = 3; i * i < n; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += 2 * i)
            {
                prime[j] = 0;
            }
        }
    }

    // Count remaining primes
    for (int i = 3; i < n; i += 2)
    {
        if (prime[i])
            count++;
    }

    free(prime);

    return count;
}