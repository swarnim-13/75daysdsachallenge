class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        // iska logic dekh esa h ki apn isko loop laga lga ke bc traverse krenge phele 1 se 3 starting row 
        // 3 se 9  ending coloumn
        //9 se 7 ending row 
        // 7 se 1 starting coloumn

        //har baar same ese hi traverse krenge ---- lekin har ek loop ke baad andr guste chale jayenge 
        // 2d vector array banane ke liye <vector<vector<int arr>>;                           

       //1d vector array ke liye vector<int>ans;

       vector<int>ans;
       int row = matrix.size(); // ye ratle 2darray me row ese niklti h coloumn ese row ko m or col ko n 
       int col = matrix[0].size();
       int count =0;
       int total = row*col;      

       // yha se samj kon starting row kon kys

       int startingRow = 0;
       int startingCol =0;
       int endingRow = row-1; // ye dono bhi rat le ki eR ke liye row-1 
       int endingCol = col-1;  //eC ke liye col-1

       while(count < total){
        //print starting row left to right
        for(int i = startingCol; i<=endingCol && count < total; i++) //meri copy dekh
        {
            ans.push_back(matrix[startingRow][i]); // 1 ko push krwaunga fir 2 fir 3 ese sR banegi
            count++;
        }
        startingRow++;
        
        // print ending coloumn top se bottom

        for(int i = startingRow; i<=endingRow && count < total; i++){
            ans.push_back(matrix[i][endingCol]); // 6 dalega fir 9
             count++;
        }
        endingCol--;
        //print ending row right se left

        for(int i = endingCol; i>=startingCol && count < total; i--){
            ans.push_back(matrix[endingRow][i]);
             count++;
        }
        endingRow--;

        //print starting coloumn bottom to top
        for(int i= endingRow; i>=startingRow && count  < total; i--){
            ans.push_back(matrix[i][startingCol]);
             count++;
        }
        startingCol++;
       }    

       return ans;
    }
};