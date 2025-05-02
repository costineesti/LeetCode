/* O[n^2] solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for(i = 0; i < nums.size(); i++) {
            for(j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // in case no solution is found (though problem says one always exists)
    }
};
*/
// O[n] solution
#include <vector>
#include <unordered_map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, const int target) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement)) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {}; // won't reach here as per the problem constraints
    }
};

/*
nums = [2 7 11 15], target = 9
1st:
    complement = 9-2 = 7
    o gasit in dictionar 7? - NU 
    seen[2] = 0
2st:
    complement = 9-7 = 2
    o gasit in dictionar 2? - DA
    return {seen[complement], i} => 0,1


*/