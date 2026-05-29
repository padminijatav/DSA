class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string w=words[i];
            reverse(words[i].begin(),words[i].end());
            if(words[i]==w){
                return words[i];
            }
        }
        return "";
    }
};