class GetPermutation {
public:
      
	string solve(int n,int k) {
    		string result="";
            vector<int> fact(n,1); 
            vector<int> nums;

            for(int i=1;i<=n;i++){
                  nums.push_back(i);
            }

            for(int i=1;i<n;i++){
                  fact[i]=fact[i-1]*i;
            }
            k=k-1;
            for(int i =n;i>=1;i--){
                  int index = k /fact[i-1];
                  result+=to_string(nums[index]); 
                  nums.erase(nums.begin() + index); //remove the value 
                  k%=fact[i-1];
            }
            return result;
      }
};

/*
Create a list of numbers from 1 to n

Precompute factorials up to n

Use (k-1) based indexing for math

For each digit:

    Pick digit at index k / fact[n - 1]

    Remove from list

    Update k = k % fact[n - 1]

Repeat until list is empty
*/
