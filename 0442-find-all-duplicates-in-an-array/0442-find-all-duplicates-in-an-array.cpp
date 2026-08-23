class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        set<int> s; //set is a bag which allow non duplicatr value only 
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            if(s.count(nums[i])) { // count  check krega ki set ke andr repeat value h ki nhi agar hein toh
                ans.push_back(nums[i]); // vo value ans me a jaye 
            }
            else {
                s.insert(nums[i]); // or agar sab unique h toh set me insert kro
            }
        }

        return ans;
    }
};