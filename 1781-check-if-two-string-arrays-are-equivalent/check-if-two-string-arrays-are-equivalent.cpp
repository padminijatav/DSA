class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        for(string c:word1) w1+=c;
        string w2="";
        for(string c:word2) w2+=c;

        return w1==w2;
    }
};