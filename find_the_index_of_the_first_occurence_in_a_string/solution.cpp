#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int s1_len = haystack.length();
        int s2_len = needle.length();

        for (int i=0;i<s1_len;i++){
            if(haystack[i] == needle[0]){
                if(haystack.substr(i, s2_len) == needle)
                return i;
            }
        }
        return -1;
        }
};

int main(){
    Solution s;
    std::string haystack = "hello";
    std::string needle = "ll";
    int result = s.strStr(haystack, needle);
    std::cout << "The index of the first occurrence of \"" << needle << "\" in \"" << haystack << "\" is: " << result << std::endl;
    return 0;
}