class Subarray {
public:
     int maxLen(vector<int> input) {
		int n=input.size();  
          int currMax= 0 , maxTillNow = INT_MIN; 
          for(int i=0;i<n;i++){
               currMax=max(input[i],currMax+input[i]);
               maxTillNow=max(maxTillNow,currMax);
          }
          return maxTillNow;
     }
};
