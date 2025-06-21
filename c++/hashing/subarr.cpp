class Subarray {
public:
    int maxLen(vector<int> input) {
        unordered_map<int, int> prefixIndex;
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < input.size(); i++) {
            sum += input[i];

            if (sum == 0) {
                maxLen = i + 1;  
            }

            if (prefixIndex.find(sum) != prefixIndex.end()) {
                // Sum already seen → subarray between previous index+1 and current i
                maxLen = max(maxLen, i - prefixIndex[sum]);
            } else {
                prefixIndex[sum] = i;  // store first occurrence
            }
        }

        return maxLen;
    }
};
