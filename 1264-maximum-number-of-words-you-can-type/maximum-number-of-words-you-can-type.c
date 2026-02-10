int canBeTypedWords(char* text, char* brokenLetters) {
    int broken[26]={0};
    for(int i=0;brokenLetters[i]!='\0';i++)
    {
        broken[brokenLetters[i]-'a']=1;
    }
    int count=0;
    int isValid=1;
    for(int i=0;text[i]!='\0';i++)
    {
        if(text[i]==' ')
        {
            if(isValid)
            {
                count++;
            }
            isValid=1;
        }
        else
        {
            if(broken[text[i]-'a']==1)
            {
                isValid=0;
            }
            

        }
    }
    if(isValid)
    count++;
    return count;
}