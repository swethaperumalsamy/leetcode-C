int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0)
    return 0;
 int min=prices[0];
 int profit=0,max;
 for(int i=1;i<pricesSize;i++)
 {
    if(prices[i]<min)
    {
        min=prices[i];
    }
    else
    {
         max=prices[i]-min;
        if(max>profit)
        {
            profit=max;
        }
    }
 }
 return profit;
}