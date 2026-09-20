class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

 //start filling element from end or end me mene ek laga diya last 
        int last = m+n -1;
        while(m>0 && n>0){
            if(nums1[m-1]>nums2[n-1]){
                // compare kra or agar num1 chota hua num2 ki value se toh 
                nums1[last] = nums1[m-1]; //hamne jo lastt bnaya h vha jake badhi value store ho jayegi
                m--;
            }
            else{
                nums1[last] = nums2[n-1];
                n--;

            }
            last--;
        }
        while(n>0){
            nums1[last] = nums2[n-1];
            n--;
            last--;
        }
    }
};