class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> count_s;
        for(char x:s) count_s[x]++;
        unordered_map<char,int> count_t;
        for(char x:target) count_t[x]++;
        int min_c=INT_MAX;
        for(char x:target){
            int count=count_s[x]/count_t[x];
            min_c=min(min_c,count);
        }
        return min_c;
    }
};