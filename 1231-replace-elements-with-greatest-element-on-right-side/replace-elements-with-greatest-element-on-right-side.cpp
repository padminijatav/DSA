class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> res;
        res.push_back(-1);
        
        int mx=arr[n-1];
        for(int i=n-2;i>=0;i--){
            mx=max(mx,arr[i+1]);
            res.push_back(mx);
        }
        reverse(res.begin(),res.end());

        return res;
    }
};