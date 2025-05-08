#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        // Sliding Window solution: https://medium.com/repeat-code-with-leetcoderepeat-code-with-leetcode-best-time-to-buy-and-sell-stock-ad8e491b5357
        int leftWindow = 0;
        int rightWindow = 1;
        int maxGain = 0;

        while(rightWindow < prices.size()){
            if(prices[leftWindow] < prices[rightWindow])
            {
                maxGain = std::max(maxGain, prices[rightWindow] - prices[leftWindow]);
            }
            else
            {
                leftWindow = rightWindow;
            }
            rightWindow++;
        }
        return maxGain;
    }
};

int main(){
    Solution s = Solution();
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout<<"Max profit is: "<<s.maxProfit(prices)<<std::endl;
    return 0;
}