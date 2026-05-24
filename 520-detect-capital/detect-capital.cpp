class Solution {
public:
    bool detectCapitalUse(string word) {
        int size=word.size();
        int count=0;
        for(int i=0;i<size;i++){
            if(isupper(word[i])) count++;
        }
        if(count==size) return true;
        else if(count==0) return true;
        else if(count==1 && isupper(word[0])) return true;
        else return false;
            
        return false;
    }
};