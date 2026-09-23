class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //binary search lagan h lekin 2d array me sab same concept rhega 

        //hm iss matrix ko 1d array samjte h kykuki dekh ye sort h puri toh easily binary search laga ddenge 
        // ad array ke [mid] ko 2d array ke midd bnane ke liye we have to
        // mid/col or mid%col col matlab coloumn 
        //col nikalna yaad hena col = matrix[0].size(); row= matrix.size()
       
       int row = matrix.size(); // m
       int col = matrix[0].size(); // n
       // binary search

       int start=0;
       int end = (row*col)-1; //m*n -1
       int mid = (start + end) /2;

       while(start<=end){
        if(target==matrix[mid/col][mid%col]){ //1d array me apn target ==mid krte h but 2d array me ussi mid ko 2d me covert ese krte h 
            return true;
        }
        if(target > matrix[mid/col][mid%col]){
            start= mid+1;
        }
        else{
              end=mid-1;
        }
        mid = (start + end) /2;
       }
        return false;
    }
};