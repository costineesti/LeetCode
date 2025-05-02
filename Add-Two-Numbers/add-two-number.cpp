
#include <iostream>
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* outputList = new ListNode(0);
        ListNode* head = outputList;
        int carry = 0;
        int sum, val1, val2;

        while(l1!=nullptr || l2!=nullptr || carry>0){
            val1 = (l1 != nullptr) ? l1->val : 0;
            val2 = (l2 != nullptr) ? l2->val : 0;

            sum = val1 + val2 + carry;
            carry = sum / 10;

            outputList->next = new ListNode(sum % 10);
            outputList = outputList->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        return head->next;
    }
};

int main() {
    Solution s;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* result = s.addTwoNumbers(l1, l2);
    
    while(result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }
    
    return 0;
}

/*
l1: [2, 4, 3]                   l1: [9, 9, 9, 9, 9, 9, 9]
l2: [5, 6, 4]                   l2: [9, 9, 9, 9]
342 + 465 = 807                 9999999 + 999 = 10009998
Output: [7, 0, 8]               Output: [8,9,9,9,0,0,0,1]
Parcurg listele si tot adun si rezultatele le tot adaug la lista de output.
*/