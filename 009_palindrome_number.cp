class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int count=0;
        int freq[10][10]={0};
        int i=0;
        int j=0;
        int row[10][10]={0};
        int col[10][10]={0};
        while(i<9 &&count<9 ){
            for(int k=i;k<i+3;k++){
                for(int n=j;n<j+3;n++){
                     if (board[k][n]  == '.') continue;
                     if (board[k][n] - '0' < 1 || board[k][n] - '0' > 9) return false;

                    int num = board[k][n] - '0';
                     if(freq[count][num] || row[k][num] || col[n][num])return false;
                  
                        freq[count][num]=1;
                        row[k][num]=1;
                        col[n][num]=1;
                  
                }
            }
            


            count++;
            if(j+3>=9){
               j=0;
               i=i+3;
            }
            else{

            j+=3;
            
            }
        }
        return true;
    }
};
