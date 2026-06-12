class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(char a:magazine){
            m[a]++;
            
        }
        for(char a:ransomNote){
            if(m[a]<=0){
                return false;
            }
            m[a]--;
        }
        return true;
    }
};