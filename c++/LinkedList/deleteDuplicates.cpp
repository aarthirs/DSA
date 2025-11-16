/* Linked List Node */
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Delete {
public:
     struct Node* deleteDuplicates(struct Node *head)
    {
        // code here 
        Node*temp = new Node(0); 
        temp->next=head; 
        int dup=0 ; 
        Node* curr= temp;
        while(curr->next != NULL && curr->next->next !=NULL){
            if(curr->next->data == curr->next->next->data){ // checking of dup
            dup= curr->next->data; 
            while(curr->next && curr->next->data == dup){ // if next value is dup skip it
                curr->next =curr->next->next;

            }
            }
            else{
                curr=curr->next; // iterator 1 step
            }
        }
        return temp->next;
    }
};
