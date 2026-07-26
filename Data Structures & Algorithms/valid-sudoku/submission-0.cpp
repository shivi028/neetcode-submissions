class Solution {
public:
    bool traverse(vector<vector<char>>& board, int sr, int er, int sc, int ec){
        unordered_set<char>s;
        for(int i=sr; i<=er; i++){
            for(int j=sc; j<=ec; j++){
                if(board[i][j] == '.') continue;
                if(s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
     // for row
     for(int i=0; i<9; i++){
        unordered_set<char>s;
        for(int j=0; j<9; j++){
            if(board[i][j] == '.') continue;
            if(s.find(board[i][j]) != s.end()) return false;
            s.insert(board[i][j]);
        }
     }

    //  for col
    for(int col = 0; col<9; col++){
        unordered_set<char>s;
        for(int row = 0; row < 9; row++){
            if(board[row][col] == '.') continue;
            if(s.find(board[row][col]) != s.end()) return false;
            s.insert(board[row][col]);
        }
    }

    for(int sr=0; sr<9; sr+=3){
        int er = sr+2;
        for(int sc=0; sc<9; sc+=3){
            int ec = sc+2;
            if(!traverse(board, sr, er, sc, ec)) return false;
        }
    }
    return true;
    }
};
