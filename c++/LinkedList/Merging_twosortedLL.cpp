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
     struct Node* solve(struct Node *head1, struct Node *head2)
    {
        // code here
        Node* dummy=new Node(0);
        Node*tail = dummy; 

        if (!head1) return head2; 
        if(!head2) return head1; 

        while(head1 && head2){
          if(head1->data < head2->data){
               tail->next = head1; 
               head1=head1->next;
          }
          else{
               tail->next=head2; 
               head2=head2->next;
          }
          tail=tail->next;
        }

     tail->next = head1? head1 :head2;
     return dummy->next;
    }
};

/*
dummy = fixed pointer (never moves)

tail = builder pointer (moves)

Because they initially point to same node, updating tail->next also updates dummy->next

Final merged list starts at dummy->next
*/
