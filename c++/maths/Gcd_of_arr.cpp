class Gcd {
public:
     int gcd(vector<int> input) {
		int min = *min_element(input.begin(),input.end());
          int max =*max_element(input.begin(),input.end());
          for(int i=min ; i>=1;i--){
               if((min % i ==0)&&(max % i==0)) return i;
          }
          return 1;
     }
};
