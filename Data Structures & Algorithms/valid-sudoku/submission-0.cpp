class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
          unordered_set <char>st;
          for(int j=0;j<9;j++){
               if(board[i][j]=='.')
                continue;
                if(st.count(board[i][j])){return false;}
                st.insert(board[i][j]);
          }
        }
        for(int i=0;i<9;i++){
            unordered_set<char>sk;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')
                continue;
                if(sk.count(board[j][i])){return false;}
                sk.insert(board[j][i]);
            }
        }
        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                    unordered_set<char>sy;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char c=board[row+i][col+j];
                if(c=='.')
                continue;
                if(sy.count(c)){return false;}
                sy.insert(c);
            }
        }
        }
        }
        return true;
        }
};
