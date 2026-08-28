class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; // mene ek array banaya ya variable bnaya vector type ka 
       map<int,int> mp; //maps cpp me ek table jesa banega jo ek sidee key store krega or dusri side value matlab index 2 values store krenge isliye 2 int 

// logic --> target=a+b hena but apn yha target-a = b krenge 
// i ye index btata h or [i] index pe rakhi value


        for(int i=0; i<nums.size();i++){

            //.find mtlb puchta h ki bhai map e 2 he kya agar ha toh nhi toh or mp. end mtlb kuch nhi mila last jgh map ki
            if(mp.find(target-nums[i])!= mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            else{

                //jese array me 2 h 4 index pe toh ye line ka mtlab h Current number ko uske index ke saath map mein save kar do.
                //mp[nums[i]=2 or i hoga 4 ]
                mp[nums[i]]= i;
                //mp[2]=4
            }
        }
        return ans;
    }
};