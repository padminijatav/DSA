class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> T;
        T['I']=1;
        T['V']=5;
        T['X']=10;
        T['L']=50;
        T['C']=100;
        T['D']=500;
        T['M']=1000;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X') ) res-=T['I'];
            else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C') ) res-=T['X'];
            else if (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M') ) res-=T['C'];
            else res+=T[s[i]];
        }
        return res;
    }
};