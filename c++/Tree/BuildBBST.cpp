/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
public:
     Node* solve(vector<int> nums) {
        // Your code here 
        int left=0 , right=nums.size()-1; 
        return bbst(nums,left,right); 
     }
     Node*bbst(vector<int>& nums , int left,int right){
        
        if(left>right) return NULL; 
        int mid=left+(right-left+1)/2 ; // after base condition check the mid
        Node* node=new Node(nums[mid]); 
        node->left=bbst(nums,left,mid-1); 
        node->right=bbst(nums,mid+1,right);
        return node;
     }
};
/* 
mid using binary search tree -- mid use as root and 
divide left and right for building root->left and right
recusion for building tree 
*/
