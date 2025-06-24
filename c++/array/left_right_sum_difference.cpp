class LeftRightSumDifferences {
public:
     vector<int> solve(vector<int> input) {
		vector<int> lsum , res; 
          int sum=0;

          for(int i=0;i<input.size();i++){
               lsum.push_back(sum);
               sum+=input[i];
          }
          sum=0;
          vector<int> rsum(input.size(), 0); // adding inputsize and initalize this as zero is important bc by this only we can able append this rsum 
          for(int i=input.size()-1;i>=0;i--){
               rsum[i]=sum ;
               sum+=input[i];
          }

          for(int i=0;i<input.size();i++){
               res.push_back(abs(lsum[i]-rsum[i]));
          }
          return res;
     }
};
