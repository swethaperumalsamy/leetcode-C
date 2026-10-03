bool repeatedSubstringPattern(char* s) {
    int n=strlen(s);
    for(int i=1;i<=n/2;i++)
    {
        if(n%i!=0)
        continue;
        int r=1;
        for(int j=1;j<n;j++)
        {
            if(s[j]!=s[j%i])
            {
                r=0;
                break;
            }
        }
        if(r==1)
        {
            return true;
        }
       

    }
     return false;
}


    
