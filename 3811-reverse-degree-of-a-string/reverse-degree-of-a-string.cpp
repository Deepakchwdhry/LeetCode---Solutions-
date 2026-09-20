class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        for(int i = 0 ;i<s.length();i++){
           total += ((123-s[i])*(i+1));
            
        }
        return total ;
    }
};