bool detectCapitalUse(char* word) {
    
    int l=0,u=0;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='A'&&word[i]<='Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(strlen(word)==u)
    {
        return true;
    }
    if(strlen(word)==l)
    {
        return true;
    }
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[0]>='A'&&word[0]<='Z'&&l==strlen(word)-1)
        {
            return true;
        }
    }
    return false;
}