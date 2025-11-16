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
    struct Node* solve(struct Node *head, int index) {

    if (!head) return head;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    int cnt = 1; // 1-based indexing

    while (cnt < index && prev->next != NULL) {
        prev = prev->next;
        cnt++;
    }

    // If index is valid
    if (prev->next != NULL) { //eg: stop at 3 and skip the x node 
        prev->next = prev->next->next;
    }

    return dummy->next;
}

};
