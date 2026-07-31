class Solution {
public:
    bool found(vector<int> arr,int n){
        bool flag=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==n) return true;
        }
        return flag;
    }
    int findFinalValue(vector<int>& nums, int og) {
        while(found(nums,og)){
            og*=2;
        }
        return og;
    }
};