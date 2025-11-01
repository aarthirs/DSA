class Triangle {
public:
     int count(vector<int> input) {
		sort(input.begin(), input.end()); 
          int cnt=0;
          for(int k=2 ; k<input.size();k++)
          {
               int i=0 , j=k-1; 
               while(i<j){
               if(input[i]+input[j]>input[k]){
                    cnt += (j-i); 
                    j--;
               }
               else{
                    i++;
               }
               }
          }
          return cnt;
     }
};

/*
from the gn number we can able to say does it form triangle by a+b >c 
*/
