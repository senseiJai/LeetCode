class Solution {
public:
    bool rotateString(string s, string goal) {
        string m=s+s;
        if(goal.size()<s.size()){
            return 0;
        }
        if(m.find(goal)<m.size()){
            return 1;
        }
        return 0;
    }
};