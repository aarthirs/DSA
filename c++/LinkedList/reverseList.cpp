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
    ListNode* reverseList(ListNode* head) {
        ListNode *curr= head , *prev =nullptr , *next ; 
        while(curr != nullptr){
            next = curr->next ; 
            curr->next=prev; 
            prev=curr ; 
            curr=next;
        }
        return prev;
    }
};

/*
3 pointer approach
1st ieration: curr=1
next=2
curr->next= 2 as null 
prev=1
curr=2

2rd: 
next=2 3 
curr->next= 1<- null
prev=1 2
curr=3

2<-1<-null
*/
