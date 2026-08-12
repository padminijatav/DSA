class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i:arr) freq[i]++;

        int ans=-1;
        for(int i:arr){
            if(freq[i]==i) ans=max(ans,i);
        }
        return ans;
    }
};