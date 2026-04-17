#include <iostream>
#include <vector>
using namespace std;

//We are given an array prices where prices[i] is the price of a given stock on the ith day.
//So we want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
int main() {
    Solution s;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << s.maxProfit(prices) << endl;

    return 0;
}
