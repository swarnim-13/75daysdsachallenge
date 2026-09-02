class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
// ek left array or roght array banana padega jese nums[1,2,3,4]

//left 1 ke left me fir 2 ke left me fir 3 ke left valo ka product...
// = [1,1,2,6] // ese hi right bana jo nums ke 4 se start kr 4 ke right me fir 3 ke right me fir 2 ke right me
// right= [24,12,4,4] start from right corner 

//bas ab left array right array ka apas me * krwa do or print krdo
        left[0]= 1;
        right[n-1] = 1;

        for(int i=1;i<n;i++){
            left[i]= nums[i-1]*left[i-1];
        }
        
         for(int i= n-2 ;i>=0 ;i--){
            right[i]= nums[i+1]*right[i+1];
        }

        vector<int> result(n);
        for(int i=0;i<n;i++){
            result[i]= left[i]* right[i];
        }
      return result;
    }
    
};