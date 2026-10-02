int* relativeSortArray(int* arr1, int arr1Size,
                       int* arr2, int arr2Size,
                       int* returnSize)
{
    int count[1001] = {0};

    // Count elements in arr1
    for (int i = 0; i < arr1Size; i++)
    {
        count[arr1[i]]++;
    }

    int* result = malloc(arr1Size * sizeof(int));
    int k = 0;

    // Put elements according to arr2
    for (int i = 0; i < arr2Size; i++)
    {
        while (count[arr2[i]] > 0)
        {
            result[k] = arr2[i];
            k++;
            count[arr2[i]]--;
        }
    }

    // Put remaining elements in ascending order
    for (int i = 0; i <= 1000; i++)
    {
        while (count[i] > 0)
        {
            result[k] = i;
            k++;
            count[i]--;
        }
    }

    *returnSize = arr1Size;

    return result;
}