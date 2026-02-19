int subtractProductAndSum(int n) {
    int a=1,b=0;
    while(n>0)
    {
        int temp=n%10;
         a=a*temp;
         b=b+temp;
        n=n/10;
    }
    int c= a-b;
    return c;
    
}
