class SimilarPairs {
public:
     int find(vector<string> input) {
	 int count = 0;
        for(int i=0;i<input.size();i++){
            string s =input[i];
            set<char> st;
            for(int j=0;j<s.size();j++){
                st.insert(s[j]);
            }
            set<char> temp;
            for(int j=i+1;j<input.size();j++){
                string t = input[j];
                
                for(auto it : t){
                    temp.insert(it);
                }
               
                if(st==temp){
                    count++;
                }
                temp.clear();
            }
        }
        return count;	
     }
};
