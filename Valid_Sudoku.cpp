class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            unordered_map<char,int> col;
            for(int j = 0;j<9;j++){
                if(board[i][j]=='.') continue;
                col[board[i][j]]++;
                if(col[board[i][j]]>1) return false;
            }
        }

        for(int j = 0;j<9;j++){
            unordered_map<char,int> row;
            for(int i = 0;i<9;i++){
                if(board[i][j]=='.') continue;
                row[board[i][j]]++;
                if(row[board[i][j]]>1) return false;
            }
        }

        for(int i = 0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                unordered_map<char,int> box;
                for(int k = 0;k<3;k++){
                    for(int l = 0;l<3;l++){
                        char val = board[i+k][j+l];
                        if(val == '.') continue;
                        box[val]++;
                        if(box[val]>1) return false;
                        
                    }
                }
            }
        }
        return true;
    }
};