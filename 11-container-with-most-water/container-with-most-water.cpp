class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxamt=0;

        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            int a=w*h;
            maxamt=max(maxamt,a);
            (height[l]<height[r])?l++:r--;
        }
        return maxamt;
    }
};