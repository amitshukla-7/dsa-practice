#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices){
    int maxprofit = 0 ;
    int bestBuy = prices[0];
    for(int i = 1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxprofit = max(maxprofit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxprofit;
}

int main(){
    vector<int>prices = {7,1,4,5,6,2};
    int result = maxProfit(prices);
    cout<<result;
    return 0;
}