class Solution {
    struct Node{
      Node*child[2]; 
      Node(){
        child[0]=nullptr;
        child[1]=nullptr;
      } 
    };
    Node*root; 
public:
    int findMaximumXOR(vector<int>& nums) {
       root=new Node(); 
       for(int i=0;i<nums.size();i++){
        insert(nums[i]);
       }

       int ans=0;
       for(int i=0;i<nums.size();i++){
        int val=getmax(nums[i]);
        ans=max(ans,val);
       }
       return ans;
    }

    void insert(int num){
        Node* node=root; 
        for(int i=31;i>=0;i--){ // 31 bits is enough for int
            int bit=(num>>i)&1; // for str = ch-'a' here this 
            if(node->child[bit]==nullptr){
                node->child[bit]=new Node();
            }
            node=node->child[bit];
        }
    }

    int getmax(int num){
        Node*node=root;
        int ans=0; 
        for(int i=31;i>=0;i--){ 
            int  bit=(num>>i)&1;
            if(node->child[1-bit] !=nullptr){ //if alternative number is there
                ans|= (1<<i);  // xor 
                node=node->child[1-bit]; //adding 0 to 1vise versa;
            }
            else{
                node=node->child[bit];
            }
        }
        return ans;
    }

};

/*
1.insert all the numbers in arr to tries
2.getmax(); 
max is decide by adding with one give max , so need to add alternative number 
*/
