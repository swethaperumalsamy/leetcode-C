int longestBalanced(char* s) {
    int n=strlen(s);
    int maxLen=0;
    for(int i=0;i<n;i++)
    {
        int dist=0;
        int maxFreq=0;
        int freq[26]={0};
        for(int j=i;j<n;j++)
        {
            int index=s[j]-'a';
            if(freq[index]==0)
            {
                dist++;
            }
            freq[index]++;
            if(freq[index]>maxFreq)
            {
                maxFreq=freq[index];
            }
            int len=j-i+1;
            if(len==dist*maxFreq)
            {
                if(len>maxLen)
                {
                    maxLen=len;
                }
            }
        }
    }
    return maxLen;
}