#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else if(x>=0 && x<10){
            return true;
        }
        else{
        int reverse = 0;
        int temp = x;
        while(temp != 0){
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        return (reverse == x);
        }
    }
};

int main() {
    Solution s;
    int x = 121;
    bool result = s.isPalindrome(x);
    std::cout << (result ? "true" : "false") << std::endl; // Output: true
    return 0;
}