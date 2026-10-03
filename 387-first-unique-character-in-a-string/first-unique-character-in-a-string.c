int firstUniqChar(char* s) {
    
    int count[26]={0},i;
    int size=strlen(s);
    for(i=0;i<size;i++)
    {
        count[s[i]-'a']++;
    }
    for(i=0;i<size;i++)
    {
        if(count[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;
}