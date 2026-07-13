class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro="";
        for(int i=0;i<words.size();i++){
            acro+=words[i][0];
        }
        
        return s==acro;
    }
};