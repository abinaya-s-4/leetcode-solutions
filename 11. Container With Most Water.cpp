class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxarea=0;
        while(l<r){
            int width = r-l;
            int currheight = min(height[l],height[r]);
            int area = width*currheight;
            maxarea=max(area,maxarea);
            if(height[r]>height[l]){
                l++;
            }else r--;
        }
        return maxarea;
    }
};