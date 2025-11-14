/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*fast=head; 
        ListNode*slow=head; 
        while(fast!= nullptr && fast->next != nullptr){  
            slow=slow->next; 
            fast=fast->next->next;
        }
        return slow;
    }
};

/*
why p=nullptr:
Avoids overload confusion
Preferred in C++11 and newer

condition is for handling even and odd 
*/
