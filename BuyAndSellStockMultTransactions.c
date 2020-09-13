// Best Time to Buy and Sell Stock, Multiple transactions

int maxProfit(int* prices, int pricesSize){
    if(pricesSize == 0)
        return 0;
    
    int i, profit, max_profit = 0;

    for(i = 1; i < pricesSize; i++) {
        profit = prices[i] - prices[i - 1];
        if(profit > 0) {
            max_profit += profit;
        }
    }
    
    return max_profit;
}
