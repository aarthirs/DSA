/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * lista=headA , *listb=headB; 
        while(lista != listb){
            lista=(lista != nullptr) ? lista->next : headB; 
            listb=(listb !=nullptr)? listb->next :headA;
        }
        return lista;
    }
};


/*
approach 1 :
1.length of two LL 
2.diff and move it so both iterate at same point
3.iterate till reaches node1==node2;

above code explain: this is the short form of approach1 implementation
If lista is not None, it moves to the next node (lista.next). Otherwise, it switches to the head of the other list (headB).
Similarly, if listb is not None, it moves to the next node (listb.next). Otherwise, it switches to the head of the other list (headA).
Why switch to the other list?
When a pointer reaches the end of one list and switches to the other, the difference in lengths between the two lists is neutralized. This ensures that both pointers traverse the same total distance before meeting.
*/
