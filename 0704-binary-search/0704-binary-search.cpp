class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s =0;
        int e = n-1;
        int mid = (s+e) / 2;
        //binary ke liye while loop lagta h 
        while(s<=e){
            if(target == nums[mid]){
                return mid;
            }
            if(target > nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = (s+e) / 2;
        }
        return -1;
    }
};