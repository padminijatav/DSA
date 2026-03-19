class Solution {
public:
    int countSegments(string s) {
        int count =0;
        bool isSeg=false;
        if(s=="") return 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ' && !isSeg) {
                count++;
                isSeg=true;
            }else if(s[i]==' ') isSeg=false;

        }
        return count;
    }
};