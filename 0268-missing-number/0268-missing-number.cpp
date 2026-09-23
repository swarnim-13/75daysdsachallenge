class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // isko maths se bhi nikal sakte h kyuki dekh our array has all numbers 0 to n hena bas koi ek nhi hogs or vhi hamko nikal ke dena h toh maths me we know sum of all n numbers = n(n-1)/2
        //toh bas pure ka sum krwake usko nums me se minus krwata rhunga jo bacha vhi missing    
        
        // logic we will use xor operator here to dolve this question xor kya krta h ki same valo ka zero krdeta h jese 2^2 =0 or 1^0 = 1 ese


        int n =nums.size();
        int result =n;

        for(int i =0; i<n;i++){
            result = result^i; //array ke index ke sath zor
             result = result^nums[i];
        }
        return result;
        }

};