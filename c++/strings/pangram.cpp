class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool alphabets[26]={false};
        for(char c:sentence){
            alphabets[c - 'a']={true};
        }
        for(int i=0; i<26;i++){
            if(!alphabets[i]){
                return false;
            }
        }
        return true;
    }
};
