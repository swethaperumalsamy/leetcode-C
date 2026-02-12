double findMaxAverage(int* nums, int numsSize, int k) { 
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=nums[i];
    }
    double max=(double)sum/k;
    for(int i=k;i<numsSize;i++)
    {
        sum=sum-nums[i-k]+nums[i];
    double avg=(double)sum/k;
    if(max<avg)
    {
        max=avg;
    }}
    return (double)max;
    
}