class ArrayZeroSplitAndMerge {
public:
     bool check(vector<int> input) {
          int count=0;
		for(int i=0;i<input.size();i++){
              if( input[i] % 2){ //checking of odd number
                count++ ;
              }
          }
          if(count % 2 == 0){
               return true;
          }
          else {
               return false ;
               }
     }
};

/*
even no of odd number give even number as output so while spliting output will be zero
*/
