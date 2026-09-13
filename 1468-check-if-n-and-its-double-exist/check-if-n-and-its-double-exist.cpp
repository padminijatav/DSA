class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if( i!=j && arr[j]==2*arr[i]) return true;
            }
        }
        return false;
    }
};