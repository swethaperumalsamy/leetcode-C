bool isValid(char* s) {
    int n=strlen(s);
    char stack[n];
    int top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch=='{'||ch=='('||ch=='[')
        {
            stack[++top]=ch;
        }
        else if(ch=='}'||ch==')'||ch==']')
        {
            if(top==-1)
            {
                return 0;
            }
            char last=stack[top];
            top--;
            if((ch==')'&&last!='(')||(ch=='}'&&last!='{')||(ch==']'&&last!='[')){
                return 0;
            }
        }
    }
    if(top!=-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}