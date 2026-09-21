class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //muje isme btana h ki current array j h usme se kitne subarray ka sum = k hoga jese num [1,2,3,5] k= 3 toh iska output ana chahiye 2 kyuki main array me dekh 2 ese array h jinka sum 3 hota h {1,2} or {3} 

        map<int,int> mp; //map bnaya h jo 2 value store krega jese 2 kitni baar aya 1 kitni baar aya 

        mp[0]=1;

        int result =0; //jo hamara subarray btayega 
        int sum =0;
        for(int i =0; i<nums.size(); i++){
            sum = sum+nums[i]; // 0+firstvalue of array h vo + hoke sum me chali jayegi

            if(mp.find(sum-k)!=mp.end()){
// puchega ki bhai sum-k is not equal to end tk

                result = result + mp[sum-k]; 
            }
            mp[sum]++;
        }

        return result;


    }
};
// map h toh time complexity 0(1) hoga or o(n) kyuki ek hi loop
//space o(1) 