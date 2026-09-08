class Solution {
public:
    int mySqrt(int x) {
        //binary search lagayenge dekh kisi bhi no ka square uske range me lie krega jese agr 5 ka square nikalna h 25 toh vo 0 se 5 ke bich me lie krega 0,1,2,3,4,5 inhi me se kisi ka square == 25 hoga 

        //96 ka sqr bhi 0 se 96 ke bich lie krega 

        int s =0;
        int e = x; // esa maan ek array h 0 se start hoke x matlab end jo user ddega vha tk
        long long  mid = (s+e)/2;
        int ans=0;

        while(s<=e){
            long long sqr = mid*mid; 
            // jese hame 4 ka sqaure 2 h vo pata krna h 
            // mid = 0+4 /2 = 2 index ab 2*2 == 4 condition true 
            if(sqr==x){ 
                return mid;
            }
            if(sqr<x){ //agar x 25 hota  toh mid niklta 0+25 /2 = 12 
            //12*12 ==  nhi 
                ans= mid;
                s=mid+1;
            }
            else{
                e = mid-1;
            }
            mid = (s+e) /2;
        }
        return ans;

     
        
    }
};