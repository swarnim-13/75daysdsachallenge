class Solution {
public:
    void reverseString(vector<char>& s) {
        int i= 0;
        int e = s.size()-1;


// ek while loop chalega i start hoha 0 se array ko traverse krega last tk

        while(i<=e){

            // 2 jagh se loop chalu hoha i=0 se or e last se dono apsa me swar hote rhenge 

            swap(s[i], s[e]);
            
            i++;
            e--;
        }
        
        
    }
};