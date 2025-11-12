class LargestRectangleHistogram {
public:
     int solve(vector<int> input) {
		stack<int> st ; 
          int tp , maxval =0 ; 
          for(int i=0 ; i<input.size();i++){

               while(!st.empty() && input[i]< input[st.top()]){
                    tp=st.top() ; st.pop();
                   int width= st.empty()?i: i-st.top()-1 ;
                    maxval=max(maxval ,(input[tp])* width);
               }
               st.push(i);
          }

          while(!st.empty()){
               int tp=st.top(); st.pop();
               int n=input.size();
               int width= !st.empty()? n-st.top()-1: n; 
               maxval=max(maxval, input[tp]*width);
          }

          return maxval;
     }
};

/*
key points is :
1.when ! arr[i]<arr[st.top]  then push the idx val in st 
2.else tp=st.top , then pop the top from the stack 
    area=arr[tp]*(i-currecttop-1)
here currect top is after popup of tp . on top prev val idx is top
3.after traversal, pop the remaining from st	
*/
