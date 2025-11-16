/* Linked List Node */
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class BinaryToDecimal {
public:
     int solve(Node *head) {
		int ans=0 ; 
        while(head != NULL){
            ans *=2 ; 
            ans+=head->data; 
            head=head->next;
        }
        return ans;
     }
};

/*
binary to decimal 
101:
ans:0 , head->next =1 
0*2+1 =1
ans 1 , val =0 
1*2+0=2
ans: 2 , val 1
2*2+1=5-- ans
*/
