class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        vector<int> gen(n+1);
        gen[0]=0;
        gen[1]=1;
        int ans=gen[0];
        for(int i=2;i<=n;i++){
            if(i%2==0) gen[i]=gen[i/2];
            else gen[i]=gen[i/2]+gen[(i/2)+1];
            ans=max(ans,gen[i]);
        }
        
        return ans;
    }
};