class FindClosestElements {
public:
     vector<int> solve(vector<int> input,int k, int x) {
		int left =0 , right =input.size()-1;
          while(right-left +1 >k){
               if(input[right]-x < x- input[left]) left++;
               else right -- ; 
          }
         return vector<int>(input.begin()+left , input.begin()+right+1);
     }
};

/*
vector<int>(input.begin()+left , input.begin()+right+1)
start from left n end at right+1 ;

*/
