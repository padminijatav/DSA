class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int m=s.size();
        int a=s[m-1]-'0';
        int b=s[m-2]-'0';
        return a*b;
    }
};