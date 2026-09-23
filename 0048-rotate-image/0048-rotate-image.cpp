class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // dekh saaf dikh rha rows are converting into coloumns 
        // transpose matrix padhi hena bas vhi banana he
        //123---> col me 123 ese hi sabka transpose le liye  or print ke time fir uss transpose matrix ka reverse le lena 

        int m= matrix.size(); // row a gai
        int n = matrix[0].size(); // vese yha same size ki matrix h 3*3ki

        //transpose 

        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
                //ese hi niklega transpose matrix
            }
        }
        // reverse nikal len transpose ka
        for(int i =0; i<m; i++){
            reverse(matrix[i].begin(), matrix[i].end());
            //reverse ka function
        }
    }
};