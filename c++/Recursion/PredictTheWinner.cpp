class PredictTheWinner {
public:
     int predict(vector<int> input, int s, int l){
          if(s==l){
               return input[s];
          }

          int first = input[s] - predict(input,s+1,l);
          int last= input[l] - predict(input,s,l-1); 

          return max(first,last);
     }
     bool check(vector<int> input) {
		return predict(input,0,input.size()-1) >=0 ; 
     }
};
