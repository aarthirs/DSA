class PalindromePairs {
public:
     vector<vector<int>> solve(vector<string> input) {
		unordered_map<string,int> freq; 
          vector<vector<int>> ans ; 
          //creating freq of reverse word
          for(int i=0;i<input.size();i++){
               string word=input[i];
               reverse(word.begin(),word.end());
               freq[word]=i;
          }

          for(int i=0;i<input.size();i++){
               string word=input[i];
               int len=word.size();
               for(int cut=0; cut<len;cut++){
                    string left=word.substr(0,cut); //"" prefix
                    string right=word.substr(cut); //abcd  suffix

                    //if left is palindrome then get the idx of reverse of right 
                    if(isPalindrome(left) && freq.count(right) && freq[right] != i){
                         ans.push_back({freq[right], i}); //{1,0} bc right=abcd idx will be 1 reverse of dcba 
                    }
                    if(isPalindrome(right) && freq.count(left)&& freq[left] !=i){
                         ans.push_back({i, freq[left]});
                    }
               }
          }
          return ans;
     }

     bool isPalindrome(string &word){
           int i =0, right = word.length()-1;
          while(i<right){
               if(word[i++] !=word[right--]) return false ;
          }
          return true ;
     }
}; 

/*
if prefix is palindrome then take the idx of suffix (reversed one in freq) 
vise versa
*/
