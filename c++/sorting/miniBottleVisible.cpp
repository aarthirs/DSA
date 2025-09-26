class MinimumBottleVisible {
public:
     int count(vector<int> input) {
		unordered_map<int,int> freq; 
          int maxVal=0;
          for(int i:input){
               freq[i]++;
               maxVal=max(maxVal,freq[i]);
          }
          return maxVal;

     }
};

/*
If there are duplicates, they cannot be nested inside each other (since condition requires A[i] < A[j]).
So the bottleneck is:
  The maximum frequency of any radius decides the minimum number of visible bottles.

Why?

Suppose we have k bottles of the same radius.

None of them can go inside each other.

Even if all other bottles are nested perfectly, you’ll still see at least k bottles.
*/
