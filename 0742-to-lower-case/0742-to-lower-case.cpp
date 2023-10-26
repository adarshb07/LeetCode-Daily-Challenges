class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(int(s[i])>=65 && int(s[i]) <= 90){
                ans.push_back(s[i] + 32);
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};