
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         // ye bkl koko minimun 8 gante me kitne banana kha sata h ek hi baar me vo btana h 
        //jese piles 1 set {3,6,7,11} toh minimun isko 4 per hour khane padenge tb jake ye 8 hour me sara kha payegi

        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        // end me jo hamara given piles h uska max element a jayega or ye * isliye lagaya kyuki ye maxelement sirf address return kreega maxVALUE JHA H USS jagah ka 
//Is returned thing ko iterator kehte hain isliye value access krne ke liye hanme * lagana padhta h 
        int ans = e;

        while(s <= e) {

            int mid = (s+e) / 2;

            long long hours = 0;

            for(int i = 0; i < piles.size(); i++) {
// hmne hour =0 se initialise kra h 
                hours = hours + (piles[i] + mid - 1) / mid;
                /// yhi logic h yhi se hamarew hour nikjal ke aayenge like kitne hour lage usse bananne khane me jese 
                

                //example :- pile =7 or mid value a gai for example 3 toh ek baar me 3 kha liye fir 3 fir 1 ==7 toh 3 gante lag gye isse computer se calculate krne ke liye we write

                // that line
            }

            if(hours <= h) {

                ans = mid;
                e = mid - 1;
            }
            else {

                s = mid + 1;
            }
        }

        return ans;
    }
};