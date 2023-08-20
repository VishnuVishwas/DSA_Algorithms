// Best time to buy and sell the stocks
// choose a day where we can buy stocks for less price and a day to sell the stocks for max price

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void buySell(vector<int>& vrr,int i, int minPrice, int& maxProfit){
    if(i == vrr.size() ) 
        return;

    if(vrr[i] < minPrice) 
        minPrice = vrr[i];

    int todaysProfit = vrr[i] - minPrice;
    if(todaysProfit > maxProfit) {
        maxProfit = todaysProfit;
    }

    return buySell(vrr, i+1, minPrice, maxProfit);
}

int main() {
    vector<int> vrr {7, 1, 5, 3, 6, 4};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    buySell(vrr, 0, minPrice, maxProfit);
    cout << "The maximum profit will be gained if it is : " << maxProfit << endl; 
}