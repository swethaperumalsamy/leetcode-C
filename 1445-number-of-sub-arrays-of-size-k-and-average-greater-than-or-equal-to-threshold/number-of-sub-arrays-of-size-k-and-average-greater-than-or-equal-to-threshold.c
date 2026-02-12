int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int count=0,sum=0;
    for(int i=0;i<k;i++)
    {
       sum+=arr[i];
    }
    float avg=(float)sum/k;
    if(avg>=threshold)
    {
        count++;
    }
    for(int i=k;i<arrSize;i++)
    {
        sum=sum-arr[i-k]+arr[i];
        avg=(float)sum/k;
        if(avg>=threshold)
        {
            count++;
        }
    }
    return count;
}