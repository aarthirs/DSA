class CheckArray {
public:
     bool check(vector<int> input1,vector<int> input2) {
          
		unordered_set<int> set1(input1.begin(),input1.end());
          unordered_set<int> set2(input2.begin(),input2.end());

          if(set1 == set2){
               return true;
          }
          else{
               return false;
          }
          
     }
};
