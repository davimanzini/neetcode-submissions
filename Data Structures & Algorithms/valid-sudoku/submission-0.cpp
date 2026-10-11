class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<set<char>> linhas(9);
        vector<set<char>> colunas(9);
        vector<set<char>> currBox(9);

        //iteracao para cada um dos 9 quadrados
        for(int k = 0; k < 9; ++k){
            //linhas
            int idxLinha = 3 * (k/3);
            for(int i = idxLinha; i < idxLinha + 3; ++i){
                int idxColuna = (k % 3) * 3;
                for(int j = idxColuna; j < idxColuna + 3; ++j){
                    
                    char curr = board[i][j];
                    if(curr == '.') continue;

                    if(linhas[i].count(curr) || colunas[j].count(curr) || currBox[k].count(curr)){
                        return false;
                    }
                    linhas[i].insert(curr);
                    colunas[j].insert(curr);
                    currBox[k].insert(curr);
                }
            }
        }
        return true;
    }
};