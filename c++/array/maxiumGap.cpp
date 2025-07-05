class MaximumGap {
public:
     int solve(vector<int> input) {
		sort(input.begin(),input.end());
          vector<int> differenceArr;
          int n=input.size(); 
          if(n<3){
               return 0;
          }
          int maxval =0;
          for(int i=0;i<n-1;i++){
               int sub = abs(input[i] - input[i+1]);
               // differenceArr.push_back(abs(sub)); 
               if(sub>maxval){
                    maxval=sub;
               }
          }
          //int result= *max_element(differenceArr.begin(),differenceArr.end());
          return maxval;
     }
};

/*two approach 
1.creating the differenceArr and find the max 
2.using int max val 
*/
