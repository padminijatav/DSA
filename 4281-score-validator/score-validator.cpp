class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> res;
        int val=0,counter=0;

        for(string s:events){
            if(s>="0" && s<="6"){
                int i=stoi(s);
                val+=i;
            }else if(s=="W") counter++;
            else val++;
            if(counter==10) break;
        }
        res.push_back(val);
        res.push_back(counter);
        return res;
    }
};