int longestBalanced(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<numsSize;i++)
    {
        int odd=0,even=0;
        int seen[100001]={0};
        for(int j=i;j<numsSize;j++)
        {
            if(seen[nums[j]]==0)
            {
               seen[nums[j]]=1;
            if(nums[j]%2==0)
            {
                even++;
            }
            else
            odd++;
            }
            if(odd==even){
            int len=j-i+1;
            if(len>max)
            max=len;
        }}
    }
    return max;
}