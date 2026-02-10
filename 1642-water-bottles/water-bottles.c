int numWaterBottles(int numBottles, int numExchange) {
    int total=numBottles;
    int exchange=numBottles;
    while(exchange>=numExchange)
    {
        int new=exchange/numExchange;
        total=total+new;
        exchange=(exchange%numExchange)+new;
    }
    return total;
    
}