/* Linked List Node */
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Palindrome {
public:
     bool solve(Node *head) {
		Node *slow=head , *fast=head; 
        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next; 
            fast=fast->next->next;
        }

        Node*second= reverseList(slow);
        Node*first=head; 

        while(second){
            if(first->data == second->data) return true; 
            second=second->next ; first=first->next;
        }
        return false;
     }
     Node* reverseList(Node *slow){
        Node *curr=slow ,*prev=NULL, *next; 
        while(curr !=NULL){
            next=curr->next; 
            curr->next=prev ; 
            prev=curr;
            curr=next;
        }
        return prev;
     }
};

/*
1.middle 
2.reverse slow 
3.compare
*/
