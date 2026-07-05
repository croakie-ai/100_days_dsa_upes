// LEETCODE 121 BEST TIME TO BUY AND SELL STOCK

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
        int maxProfit(vector<int> &prices){
            int minProfit=0;
            int maxProfit=0;
            int mini=prices[0];
            for(int i=0;i<prices.size();i++){
                minProfit=prices[i]-mini;
                maxProfit=max(maxProfit,minProfit);
                mini=min(mini,prices[i]);
            }
            return maxProfit;
        }
};

int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution obj;
cout<<obj.maxProfit(prices);
    return 0;
}