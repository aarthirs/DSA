class MaxConsecutiveOnes {
public:
     int count(vector<int> input) {
		vector<int> arr ; 
          int count =0;
          for(int i: input){
               if(i == 1){
                    count++ ; 
               }
               else{
                    arr.push_back(count);
                    count =0 ;
               }
          }
          arr.push_back(count);
          return *max_element(arr.begin(),arr.end());
     }
};

// here also use max_count =max(count++ , maxcount); 
