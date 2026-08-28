char* mostCommonWord(char* paragraph, char** banned, int bannedSize) {
    static char words[1000][20];
    static int count[1000]={0};
    int n=0;
    char*word=strtok(paragraph," .,?!:;'");
    while(word!=NULL)
    {
       for(int i=0;word[i]!='\0';i++)
       {
        word[i]=tolower(word[i]);
       }
       int isBanned=0;
       for(int i=0;i<bannedSize;i++)
       {
        if(strcmp(word,banned[i])==0)
        {
            isBanned=1;
            break;
        }
       }
       if(isBanned==0)
       {
        int found=0;
        for(int i=0;i<n;i++)
        {
          if(strcmp(word,words[i])==0)
          {
            found=1;
            count[i]++;
            break;
          }
        }
        if(found==0)
        {
            
            strcpy(words[n],word);
                count[n]=1;
                n++;
            
        }
       
       }
    
     word=strtok(NULL," ,.?!;:'");
    }
    int max=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            index=i;
        }
    }
    return words[index];
}