class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> rank;
        int r = 1;

        for (int x : temp) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=rank[arr[i]];
        }
        return ans;
    }
};