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
     struct Node* solve(struct Node *head, int val)
    {
        // code here
        if(head==NULL) return NULL; 
        head->next=solve(head->next,val);
        return  head->data==val ? head->next :head;
    }
};
