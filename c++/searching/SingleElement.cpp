class SingleElement {
public:
     int find(vector<int> input) {
		int l=0 ; 
          int r=input.size()-1; 
          if(input.size()==1) return input[0];
          while(l<=r){
              int m = l + (r - l) / 2;
               if((m != input.size()-1) && (input[m]== input[m^1])){
                    l=m+1;
               }
               else{
                    r=m-1;
               }
          }
          return input[l];
     }
};
/*
here we comparing the each element with before element 
m=l+(r-l)/2 is same as r+l/2 
*/
