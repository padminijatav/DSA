class Solution {
public:
    string processStr(string s){
    if(s.size()==0) return "";
    string res;
    for(char a:s){
        if(islower(a)) res+=a;
        else if(a=='*'){
            if(!res.empty()) res.pop_back();
        }else if(a=='#') res+=res;
        else if(a=='%') reverse(res.begin(),res.end());
    }
    return res;
    }
};