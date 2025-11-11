class Expression {
public:
	bool check(string s) {
          stack<char> st;
    		for(int i=0; i<s.length();i++){
               if(s[i]==')'){
                    bool isoperator=false;
               while(!st.empty()&& st.top()!='('){
                    char topval=st.top();
                    if(topval=='+' || topval=='-'|| topval=='/'||topval=='*'){
                         isoperator=true;
                    }
                    st.pop();
               }
               if (!st.empty()) st.pop();
               //if no operator found inside (b) 
               if(!isoperator){
                    return true;
               }
               }
               else{
                    st.push(s[i]);
               }
          }
          return false ;
         
      }
};

/*
1.push untill reach )
2. if true pop and check for operator . if no operator found inbtwn then () are redundant
*/
