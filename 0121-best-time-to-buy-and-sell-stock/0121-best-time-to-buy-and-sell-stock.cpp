class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // you have to find max profit me lowest pe khridunga stock or high proice me sell kr dunga usse mera max profit jitna aaye 
        // jese agar me 1 pe buy kr  rha hu or 5 pe bech rha toh mera 4 ka profit but agar me 1 pe buy kr rha or 6 pe bech rha toh muje max_profit mil rha h 

        int Max_profit = 0;
        int Min_price =prices[0]; // iska matlab array ki first value se start hoga fir niche loop se auto update hogi 
         //abhi ke liye mene mana mera minimum profit or price zero h fir array ko traverse krwa ke iske andr value fill hogi 
        for(int i=0; i<prices.size();i++){
            Min_price = min(Min_price , prices[i]);
            Max_profit = max(Max_profit, prices[i]- Min_price);
            
        }
        return Max_profit;
    }
};