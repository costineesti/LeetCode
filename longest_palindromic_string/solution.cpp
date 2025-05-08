#include <iostream>
#include <string>

class Solution {
public:
    std::string expandAroundCenter(const std::string& s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

    std::string longestPalindrome(std::string s) 
    {
        std::string longest;
        for (int i = 0; i < s.size(); ++i) 
        {
            std::string odd = expandAroundCenter(s, i, i);
            std::string even = expandAroundCenter(s, i, i + 1);
            if (odd.size() > longest.size()) longest = odd;
            if (even.size() > longest.size()) longest = even;
        }
        return longest;
    }
};

int main(){
    Solution s = Solution();
    std::string inputString = "bcaaed";
    std::cout<<"Longest palindrome in "<<inputString<<" is: "<<s.longestPalindrome(inputString)<<std::endl;
    return 0;
}