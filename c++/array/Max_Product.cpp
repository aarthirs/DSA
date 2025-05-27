class MaxProduct {
public:
     int solve(vector<int> input) {
		int max1=*max_element(input.begin(),input.end());
          // auto del=input.erase(remove(input.begin() , input.end(),max1),input.end());
           auto it = find(input.begin(), input.end(), max1);
        if (it != input.end()) {
            input.erase(it);
        }
          int max2=*max_element(input.begin(),input.end());
          int result=(max1-1)*(max2-1);
          return result;
     }
};
