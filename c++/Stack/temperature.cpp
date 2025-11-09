class Temperatures {
public:
     vector<int> temperatures(vector<int> input) {
	     stack<int> st ; 
         vector<int> ans(input.size(), 0);
          for(int i=0;i<input.size();i++){
               while(!st.empty()&&input[i]>input[st.top()]){
                         int topVal=st.top();
                         st.pop();
                         ans[topVal]=i-topVal;
                    }
                    st.push(i);
               }

          
          return ans;
     }
};

/*
here st stores the idx of ele 
Steps:

Traverse the array from left to right.

For each temperature:

While the current temperature is higher than the one at the top of the stack,
→ Pop that index from the stack.
→ Compute i - popped_index = how many days we waited.

Push the current day’s index onto the stack.
*/
