class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int ,char> f;
        for(int i=0;i<s.size();i++){
            if(f.find(s[i])!=f.end()){
                return s[i];
            }
            f[s[i]]++;
        }
        return ' ';
    }
};