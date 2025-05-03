#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.length() == 0 || s.length() == 1) return s.length();

        int n = s.length();
        int res = 0;
        std::vector<int> lastIndexVector(128, -1);
        int start = 0;
        // Source: https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/
        for (int end=0; end<n; end++){
            start = std::max(start, lastIndexVector[s[end]] + 1);
            res = std::max(res, end-start+1);
            lastIndexVector[s[end]] = end;
        }
        return res;
    }
};

int main() {
    Solution solution;
    std::string input = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(input);
    std::cout << "Length of longest substring without repeating characters: " << result << std::endl;
    return 0;
}