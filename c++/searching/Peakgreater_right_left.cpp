class Peak {
public:
     int peak(vector<int> input) {
		int n=input.size(); 

          if(n==1) return 0;
          if(input[0]>input[1]) return 0;
          if (input[n-1] >input[n-2]) return n-1;

          int left =1 , right= n-2;
          while (left<=right){
               int mid=left + (right-left)/2 ; 
               if((input[mid]>input[mid-1])&& (input[mid] > input[mid+1])) return mid ;
               else if (input[mid]< input[mid-1]) right=mid-1;
               else if(input[mid]<input[mid+1]) left= mid+1;
          }
          return 1e9+7;
     }
};
