class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
          return s.empty()?-1: minEle; 
       }
       
       /*returns popped element from stack*/
       int pop(){
          if(s.empty()) return -1 ; 

          int t=s.top(); 
          s.pop();
          if(t>=minEle){
              return t ;
          }
          else{
               int res=minEle; // here minele is in else part of push() we update minelem = x;
               minEle=2*minEle -t ; 
              return res;
          }

       }
       
       /*push element x into the stack*/
       void push(int x){
           
           if(s.empty()){
               s.push(x); 
               minEle=x ; 
           }
           else{
               if(x>=minEle){
                    s.push(x);
               }
               else{ 
                    s.push(2*x - minEle);
                    minEle=x;
               }
           }
       }
};

/*
| Operation | Action         | Stack     | minEle |
| --------- | -------------- | --------- | ------ |
| push(5)   | normal         | [5]       | 5      |
| push(3)   | encoded(1)     | [5, 1]    | 3      |
| push(7)   | normal         | [5, 1, 7] | 3      |
| pop()     | normal         | [5, 1]    | 3      |
| pop()     | decode old min | [5]       | 5      |

*/
