class Solution {
public:
    string finalString(string s) {
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(word.begin(),word.end());
            }else{
                word+=s[i];
            }
        }
        return word;
    }
};