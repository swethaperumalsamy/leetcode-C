int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
    int* result = malloc(2 * sizeof(int));

    int* count = calloc(numsSize + 1, sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        count[nums[i]]++;
    }

    int duplicate = 0;
    int missing = 0;

    for (int i = 1; i <= numsSize; i++)
    {
        if (count[i] == 2)
            duplicate = i;

        if (count[i] == 0)
            missing = i;
    }

    result[0] = duplicate;
    result[1] = missing;

    *returnSize = 2;

    free(count);

    return result;
}