class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int> res(n);
        int i=0,j=0;

        while(j<n){
            if(arr[i]==0){
                res[j]=arr[i];
                if(j<n-1){
                    j++;
                    res[j]=arr[i];
                }
            }else{
                res[j]=arr[i];
            }
            
            i++,j++;
        }
        arr=res;

    }
};