class Solution {
public:
bool find(vector<vector<char>> board,int sr,int er,int sc,int ec){
    unordered_set<char> st;
    for(int i=sr;i<=er;i++){
        for(int j=sc;j<=ec;j++){
            if(board[i][j]=='.') continue;
            if(st.find(board[i][j])!=st.end()) return false;
            st.insert(board[i][j]);
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()) return false;
                st.insert(board[i][j]);
            }
           
        }
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(st.find(board[j][i])!=st.end()) return false;
                st.insert(board[j][i]);
            }

        }
        for(int row=0;row<9;row+=3){
            int er=row+2;
            for(int column=0;column<9;column+=3){
                int ec=column+2;
                if(!(find(board,row,er,column,ec))){
                    return false;
                }
            }
        }

        return true;
    }
};
