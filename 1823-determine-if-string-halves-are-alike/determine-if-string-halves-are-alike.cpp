class Solution {
public:
    int countVowel(string s){
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'
            || s[i]=='i' || s[i]=='o'
            || s[i]=='u' || s[i]=='A'
            || s[i]=='E' || s[i]=='I'
            || s[i]=='O' || s[i]=='U') count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        string a="";
        string b="";
        int n=s.size();
        for(int i=0;i<n/2;i++){
            a+=s[i];
        }
        for(int i=n/2;i<n;i++){
            b+=s[i];
        }
        int c_a=countVowel(a);
        int c_b=countVowel(b);
        if(c_a==c_b) return true;
        return false;
    }
};