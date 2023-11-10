long stockmax(vector<int> prices) {
    long maxProfit = 0;
    int n = prices.size();
    int sellPrice = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (prices[i] > sellPrice) {
            sellPrice = prices[i];
        }
        maxProfit += sellPrice - prices[i];
    }

    return maxProfit;
}
