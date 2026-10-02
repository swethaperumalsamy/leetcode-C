bool validMountainArray(int* arr, int arrSize)
{
    if (arrSize < 3)
        return false;

    int i = 0;

    // Go up
    while (i + 1 < arrSize && arr[i] < arr[i + 1])
    {
        i++;
    }

    // Peak cannot be first or last
    if (i == 0 || i == arrSize - 1)
        return false;

    // Go down
    while (i + 1 < arrSize && arr[i] > arr[i + 1])
    {
        i++;
    }

    return i == arrSize - 1;
}