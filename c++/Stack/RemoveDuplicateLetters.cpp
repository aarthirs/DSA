class RemoveDuplicateLetters {
public:
	string check(string s) {
    		vector<int> freq(26,0); 
          vector<bool> instack(26,false); 
          stack<char> st;
          for(char ch:s) freq[ch -'a']++;

          for(char ch:s){
               freq[ch-'a']-- ; 
               if(instack[ch-'a']) continue ; 
               while(!st.empty() &&  st.top()> ch && freq[st.top()-'a']>0){ 
                    instack[st.top()-'a']=false; 
                    st.pop();
               }
               st.push(ch);
               instack[ch-'a']=true;
          }
          string resStr;
          while(!st.empty()){
               resStr=st.top()+resStr;
               st.pop();
          }
          return resStr;
      }
};

/*
if top value eg: b> a and b is also duplicated then 
make instack false n pop that out

instack is track for duplication 
*/
