class LetterCombinations {
private: 
   vector<string> mapping = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };
    void backtracking(string& digits , int index , string current , vector<string>& res){
          if(index == digits.size()){
               res.push_back(current);
               return;
          }
          string letter=mapping[digits[index] - '0'];  // convert str to int for eg : mapping[1]
          for(char c:letter){
               backtracking(digits,index+1,current+c , res);
          }
    }

public:
   
     vector<string> solve(string digits) {
		vector<string> res ; 
          if(digits.empty()) return res; 
          string current=""; 
          backtracking(digits,0,current,res);
          return res;
     }
     
};

/*
⭐ LEVEL 1 — index = 0 → digit '2' → letters = "abc"

Loop over: a, b, c

① Pick 'a'

Call:

backtracking("23", index=1, current="a")

⭐ LEVEL 2 — index = 1 → digit '3' → letters = "def"

Loop over: d, e, f

1) Pick 'd'
backtracking("23", index=2, current="ad")
index == digits.size() → push "ad"
res = ["ad"]

2) Pick 'e'
backtracking("23", index=2, current="ae")
→ push "ae"
res = ["ad", "ae"]

3) Pick 'f'
.....
after def , then b and c will continue 
*/
