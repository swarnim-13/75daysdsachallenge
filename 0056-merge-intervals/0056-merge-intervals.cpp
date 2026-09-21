class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

// jese [[1,3], [2,6] , [8,10] [15,18] ] jo overlap ho rha h jese 3 badha h 2 se  or 3 or 6 me kon badha h toh 6 badha h toh [1,6] a gya

        vector<vector<int>> ans; //ek khali array bnaya ans naam se 

        sort(intervals.begin(), intervals.end()); //usse sort krwa liya 

        // khali array me firstvalue insert krdi

        ans.push_back(intervals[0]);
         
        int j=1;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]> ans[j-1][1]){
                ans.push_back(intervals[i]);
                j++;

            }
            else{
                ans[j-1][1]=max(ans[j-1][1],intervals[i][1]);
            }
            
        }
        return ans;
        
    }
};