class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        string first=strs[0],last=strs[strs.size()-1];
        int i=0;
        while(i<min(first.size(),last.size())){
            if(first[i]==last[i]){
                res+=first[i];
            }else{
                return res;
            }
            i++;
        }
        return res;
    }
};