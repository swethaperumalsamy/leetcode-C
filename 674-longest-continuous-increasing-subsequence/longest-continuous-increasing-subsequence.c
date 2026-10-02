int findLengthOfLCIS(int* nums, int numsSize)
{
    if (numsSize == 0)
        return 0;

    int current = 1;
    int longest = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > longest)
        {
            longest = current;
        }
    }

    return longest;
}