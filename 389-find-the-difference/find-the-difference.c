char findTheDifference(char* s, char* t) {
    
    int res=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        res=res^s[i];
    }
    for(i=0;t[i]!='\0';i++)
    {
        res=res^t[i];
    }
    return res;
    
}