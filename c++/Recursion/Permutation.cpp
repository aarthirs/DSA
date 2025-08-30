
class Permutation {
public:
    vector<vector<int>> permutations(vector<int> input, vector<int> ans) {
        if (input.size() == 0) {
            return { ans }; // return a single permutation
        }

        vector<vector<int>> result;

        for (int i = 0; i < input.size(); i++) {
            int selectedInt = input[i];

            // Create new input by removing input[i]
            vector<int> remainingInput = input;
            remainingInput.erase(remainingInput.begin() + i);

            // Create new answer by adding selectedInt
            vector<int> newAns = ans;
            newAns.push_back(selectedInt);

            // Recursive call
            vector<vector<int>> subPerms = permutations(remainingInput, newAns);

            //only when base condition hit : Append subperms to the end of result 
            result.insert(result.end(), subPerms.begin(), subPerms.end());
        }

        return result;
    }

    vector<vector<int>> solve(vector<int> input) {
        vector<int> ans;
        return permutations(input, ans);
    }
};
