class MCTFromLeafValues {
public:
     int solve(vector<int> input) {
        int sum=0;
        while(input.size()>1){
            int minproduct=INT_MAX; 
            int minidx=-1; 

            for(int i=1; i<input.size();i++){
                if(minproduct>input[i]*input[i-1]){
                    minidx=input[i-1]<input[i]?i-1:i; // When merging two leaves → remove the smaller, keep the larger
                    minproduct=input[i-1]*input[i];
                }
            }
            sum+=minproduct; 
            input.erase(input.begin()+minidx);//remove specific element at that idx 
        }
        return sum;
     }
};
