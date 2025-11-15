/* Linked List Node */
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class FindFirstNode {
public:
     int solve(Node *head) {
		Node *fast = head , *slow=head ; 
          while(fast && fast->next){
               fast=fast->next->next; 
               slow=slow->next; 

               if(fast == slow) break;
          }
          Node *ptr1=head , *ptr2=slow; 
          while(ptr1!=ptr2){
               ptr1=ptr1->next; 
               ptr2=ptr2->next;
          }
          return ptr2->data;
     }
};

/*
here similar to checking where there is a loop/cycle but 
When slow & fast meet in a loop, break
moving one pointer to head and then moving both 1 step at a time
makes them meet at the start of the loop. both ptr equal that loop break so both can return same value 
ptr1: 1 → 2 → 3
ptr2: 4 → 5 → 3
Both meet at 3 — the LOOP START.

===============

*/ 
