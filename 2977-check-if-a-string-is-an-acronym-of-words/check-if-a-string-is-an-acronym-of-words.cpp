class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro="";
        for(int i=0;i<words.size();i++){
            acro+=words[i][0];
        }
        if(s==acro) return true;
        return false;
    }
};