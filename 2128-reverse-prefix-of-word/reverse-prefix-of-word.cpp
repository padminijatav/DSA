class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int i=0,j=0;

        while(j<n && word[j]!=ch) j++;
        if(j==n) return word;
        reverse(word.begin(),word.begin()+j+1);
        return word;
    }
};