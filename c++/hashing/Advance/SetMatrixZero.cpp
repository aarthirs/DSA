class SetMatrixZero {
public:
    vector<vector<int>> solve(vector<vector<int>> input) {
        int n = input.size(), m = input[0].size();
        bool firstRow = false, firstCol = false;

        //  Check if first column has any 0
        for (int i = 0; i < n; i++) {
            if (input[i][0] == 0)
                firstCol = true;
        }

        //  Check if first row has any 0
        for (int j = 0; j < m; j++) {
            if (input[0][j] == 0)
                firstRow = true;
        }

        //  Mark zeros in first row/col (excluding first row/col)
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (input[i][j] == 0) {
                    input[i][0] = 0;
                    input[0][j] = 0;
                }
            }
        }

        //  Use marks to set inner matrix zeros
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (input[i][0] == 0 || input[0][j] == 0) {
                    input[i][j] = 0;
                }
            }
        }

        //  Handle first row
        if (firstRow) {
            for (int j = 0; j < m; j++) {
                input[0][j] = 0;
            }
        }

        //  Handle first column
        if (firstCol) {
            for (int i = 0; i < n; i++) {
                input[i][0] = 0;
            }
        }

        return input;
    }
};
