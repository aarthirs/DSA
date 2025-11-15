/* Linked List Node */
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Solution {
public:
     struct Node* solve(struct Node *head, int n)
    {
        // code here
        Node* start=new Node(0);
        start->next=head; // start from 0 , head...
       Node *slow= start , *fast=start ; 
         for(int i=1;i<=n;i++){
               fast=fast->next; // making the fast n steps 
               }
          while(fast->next !=NULL){
                    slow=slow->next;
                    fast=fast->next; 
          }
          slow->next=slow->next->next; // when fast is null else part
          
          return start->next;
    }
};

// when fast is null , slow reach the n th element from last
//then that time return slow of next as next of next -- there by we skipping that one 
