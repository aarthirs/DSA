class SubArraySum {
public:
     int solve(vector<int> input,int k) {
		int sum=0 ,count=0; 
          map<int , int> freq ; 
          freq[0]=1 ; 
          for( int n: input){
               sum+=n ; 
               if(freq.find(sum-k) != freq.end()){
                    count+=freq[sum-k];
               }
               freq[sum]++; // here only we add key-value to freq : sum key and it's no.of. occur is value
          }
          return count;
     }
};

/*
Input: nums = [1,1,1], k = 2
{0:1, 1:1, 2:1, 3:1}
So every key = prefix sum value,
and value = how many times that prefix sum has appeared.
*/ 
