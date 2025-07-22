class ConvertToTitle {
public:
	string solve(int n) {
    		string res=""; 
            while(n>0){
                  n-- ; 
                  char ch = 'A' + (n %26) ; 
                  res=ch+res;
                  n/=26;
            }
            return res;
      }
};


// For columnNumber = 28:

//     Step 1: 28-1 = 27, 27 % 26 = 1 → 'B'

//     Step 2: 27 / 26 = 1

//     Step 3: 1-1 = 0, 0 % 26 = 0 → 'A'
//     → Result: "AB"
