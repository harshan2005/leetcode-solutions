class Solution {
public:
    int maxProfit(vector<int>& prices){
        int minPrice=INT_MAX,maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice)minPrice=prices[i];
            else if(prices[i]-minPrice>maxProfit)maxProfit=prices[i]-minPrice;
        }
        return maxProfit;
    }
};
