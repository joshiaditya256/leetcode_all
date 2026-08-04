class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s + s;
        int n = ans.size();
  if(s.length()!= goal.length()) return false;
     
            if(ans.contains(goal) ){
    return true;
            }
        
        return false;
    }
};