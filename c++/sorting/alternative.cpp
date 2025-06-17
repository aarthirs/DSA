class Alternate {
public:
   
     vector<int> asort(vector<int> input) {
		vector<int> arr;
          sort(input.begin(),input.end());
          int len=input.size(); 
         int first=0;
         int last= len-1;
          while(first<last){
               arr.push_back(input[last]);
               arr.push_back(input[first]);
               last--;
               first++;
          }
          if(len%2 !=0){
               arr.push_back(input[first]);
          }
          return arr;
     }
};
