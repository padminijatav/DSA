class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> freq;
        for(char c: moves){
            freq[c]++;
        }
        bool flag=false;
        if(freq['U'] ==freq['D'] && freq['R']==freq['L']) flag=true;
        return flag;
    }
};