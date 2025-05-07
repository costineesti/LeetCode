#include <cassert>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2};
    vector<int> expectedNums = {1, 2};

    int k = solution.removeDuplicates(nums); // Correct function call

    assert(k == expectedNums.size());
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "Test passed. k = " << k << endl;
    return 0;
}