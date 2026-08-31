class Solution {
public:
    bool isSelfDividing(string n){
        int og =stoi(n);
        for(char c:n){
            if(c=='0' || og%(c-'0')!=0) return false;
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left ,int right){
        vector<int>res;

        for(int i=left ;i<=right;i++){
            if(isSelfDividing(to_string(i))){res.push_back(i);}
            
        }
        return res;
    }
};