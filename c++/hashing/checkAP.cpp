class CheckAP {
public:
     bool check(vector<int> input) {
		sort(input.begin(), input.end()); 
          int diff = abs(input[0]-input[1]);
          bool found=true;
          for(int i=0; i<input.size()-1;i++){
              int innerDiff =abs( input[i]- input[i+1]); 
               if(innerDiff != diff){
                       found= false;
                       break;
               }
               
          }
          return found;
     }
};
