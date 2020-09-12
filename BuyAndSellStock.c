// Best Time to Buy and Sell Stock

int maxProfit(int* prices, int pricesSize){
    if(pricesSize == 0)
        return 0;
    
    int max_profit = 0;
    int min_cost_to_buy = prices[0];
    int i;
    
    for(i = 1; i < pricesSize; i++) {
        if(prices[i] < min_cost_to_buy) {
            min_cost_to_buy = prices[i];
        }
        
        if((prices[i] - min_cost_to_buy) > max_profit) {
            max_profit = (prices[i] - min_cost_to_buy);
        }
    }
    
    return max_profit;
}
