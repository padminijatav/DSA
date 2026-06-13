class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> t;
        for(char i:s){
            t[i]++;
        }
        for(int i=0;i<s.size();i++){
            if(t[s[i]]==1) return i;
        }
        return -1;
    }
};