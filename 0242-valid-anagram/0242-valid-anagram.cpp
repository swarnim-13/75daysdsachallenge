class Solution {
public:
    bool isAnagram(string s, string t) {
        // it can be solved by two approach 1.is sort kro dono string ko s.sort  krke or t.sort krke dono sort ho jaaye toh s or t ko compare krlo agar same hue toh anagram nhi toh nhi  

// or second way is using map hash map 
        map<char , int> m1; //ek map bana jo char store krega or uske samne uska count

        // jese s = anagram 
// map me ek side a store hoga or uske samne uska count jese a 3 baar aya 
// n 1 baar g 1 baar r 1 baar m bhi 1 

         map<char , int> m2;
//same ese hi m2 bhi ek map banega jo same count or char store krega 

         if(s.size() != t.size()){
            return false;
         }
         for(int i=0; i<s.size(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
         // vhi loop chalega or count or char store hona chalu ho jayegnge  
         
         }
// last me dono maap ko or unke count ko compare kra jayega jese dono map me a 3 baar h  m 1 baar ese sabko compare krke we can say true or false 
if(m1 == m2){
    return true;
}
else{
    return false;
}
        
    }
};