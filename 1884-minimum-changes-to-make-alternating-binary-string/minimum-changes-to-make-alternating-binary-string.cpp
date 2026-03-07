class Solution {
public:
    int minOperations(string s) {
        int change1=0;
        int change2=0;
        string str1(s.size(),'0');
        str1[0]='0';
        string str2(s.size(),'0');
        for(int i=1;i<s.size();i++){
            if(str1[i-1]=='0') str1[i]='1';
            else str1[i]='0';
        }
        for(int i=0;i<s.size();i++){
            if(str1[i]=='0') str2[i]='1';
            else str2[i]='0';
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=str1[i]) change1++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=str2[i]) change2++;
        }
        return min(change1,change2) ;
    }
};