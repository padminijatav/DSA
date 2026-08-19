class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int r) {
        int c=0;
        int n=flowerbed.size();
        for(int i=0;i<n;i++){
            if(flowerbed[i]==0){
                bool left = (i==0) || flowerbed[i-1]==0;
                bool right= (i==n-1) || flowerbed[i+1]==0;

                if(left && right) {
                    flowerbed[i]=1;
                    c++;
                }

            }
        }
       bool flag;
       if(c>=r) flag=true;
       else flag=false;
        return flag;
    }
};