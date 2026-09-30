class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int curr=0;
        vector<int> res;
        for(char c:seq){
            if(c=='('){
                res.push_back(curr%2);
                curr++;
            }else{
                curr--;
                res.push_back(curr%2);
            }
        }
        return res;
    }
};