class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        backtrack(board,0);
        return res;
    }
     bool isSafe(vector<string>& board, int row, int col){
            //vertical
            for(int i=0; i<row;i++){
                if(board[i][col]=='Q') return false;
            }
            //positive diagonal 
            for(int r=row , c=col ; r>=0 && c>=0 ; r-- ,c--){
                if(board[r][c]=='Q') return false;
            }
            for(int r=row , c=col ; r>=0 && c< board.size() ; r-- ,c++ ){
                if(board[r][c]=='Q') return false;
            }
            return true;
        }
    void backtrack(vector<string>& board , int row){
        if(row == board.size()) {
            res.push_back(board);
            return;
        }
        for(int col=0;col<board.size();col++){
            if(isSafe(board ,row ,col)){
                board[row][col]='Q';
                backtrack(board,row+1);
                board[row][col]='.';
            }
        }

       
    }
};
