int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int left = 0;
    int right = numsSize - 1;

    while (left < right)
    {
        if (nums[left] % 2 != 0 && nums[right] % 2 == 0)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }

        if (nums[left] % 2 == 0)
            left++;

        if (nums[right] % 2 != 0)
            right--;
    }

    *returnSize = numsSize;
    return nums;
}