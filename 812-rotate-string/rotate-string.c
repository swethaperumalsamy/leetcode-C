bool rotateString(char* s, char* goal) {
    int n=strlen(s);
    if(strlen(goal)!=n)
    {
        return false;
    }
    char temp[2*n+1];
    strcpy(temp,s);
    strcat(temp,s);
    if(strstr(temp,goal)!=NULL)
    {
        return true;
    }
    return false;
    
}