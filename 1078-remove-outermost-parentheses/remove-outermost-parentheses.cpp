
class Solution {
public:
    string removeOuterParentheses(string s) {
       int count =0;
       string result = "";
       for(auto x:s){
        if(x=='('){
            if(count!=0){
                result.push_back(x);
            }
             count++;
        }
        else{
              count--;
            if(count!=0){
                result.push_back(x);
            }
        }
       }
       return result;
    }
};
