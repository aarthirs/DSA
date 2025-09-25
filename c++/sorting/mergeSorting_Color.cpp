class sortColors {
public:
    vector<int> merge(vector<int> first , vector<int> second){
        int i=0, j=0;
        vector<int> result;
        while(i<first.size() && j<second.size()){
            if(first[i] <= second[j]){
                result.push_back(first[i++]);
            }
            else{
                result.push_back(second[j++]);
            }
        }
        while(i<first.size()){
            result.push_back(first[i++]);
        }
        while(j<second.size()){
            result.push_back(second[j++]);
        }
        return result; 
    }

    vector<int> mergeSort(vector<int>& input, int start ,int end){
        if(start == end) {
            return {input[start]};  // return vector with single element
        }

        int mid = start + (end - start) / 2;  
        vector<int> first = mergeSort(input, start, mid);
        vector<int> second = mergeSort(input, mid+1, end);
        return merge(first, second);
    }

    vector<int> solve(vector<int> input) {
        return mergeSort(input, 0, input.size()-1);
    }
};
