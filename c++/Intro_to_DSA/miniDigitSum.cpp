class MinimumDigitSum {
public:
     int sum(vector<int> input) {
		sort(input.begin(), input.end()); 
          int n=input.size(); 
          int a=0,b=0;
          for(int i=0;i<n;i++){
               if(i & 1){
                    a=a*10+ input[i];
               }
               else{
                    b=b*10 +input[i];
               }
          }
          return a+b;
     }
};
