#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    int* count = calloc(numsSize + 1, sizeof(int));
    int* result = malloc(numsSize * sizeof(int));

    int k = 0;

    for (int i = 0; i < numsSize; i++)
    {
        count[nums[i]] = 1;
    }

    for (int i = 1; i <= numsSize; i++)
    {
        if (count[i] == 0)
        {
            result[k] = i;
            k++;
        }
    }

    *returnSize = k;

    free(count);

    return result;
}