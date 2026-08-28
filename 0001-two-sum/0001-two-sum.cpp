class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; // mene ek array banaya ya variable bnaya vector type ka 
       map<int,int> mp; //maps cpp me ek table jesa banega jo ek sidee key store krega or dusri side value matlab index 

// logic --> target=a+b hena but apn yha target-a = b krenge 
// i ye index btata h or [i] index pe rakhi value


        for(int i=0; i<nums.size();i++){
            if(mp.find(target-nums[i])!= mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            else{
                mp[nums[i]]= i;
            }
        }
        return ans;
    }
};