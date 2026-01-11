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
    class Comparator{
        public:// imp
        int operator()(ListNode* a ,ListNode* b){
            return b->val < a->val ; // min heap
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Comparator> pq;
        
        for(auto li : lists){
            if(li != nullptr){ 
                pq.push(li); //Each li is a pointer to the first node of a linked list.
            }
        }
        ListNode*head=nullptr;
        ListNode*tail=nullptr;
        while(!pq.empty()){
            ListNode* front=pq.top(); 
            pq.pop();
            if(front->next) pq.push(front->next); 
          
            if(head==nullptr) {
                head=front; 
                tail=front;
            }
            else{
                tail->next=front; // attach the new node 
                tail=tail->next;// move the tail forward
            }
        }
        return head;
    }
};
