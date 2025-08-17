class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int maxleft=0;int maxright=0;
        int l=0;int r=height.size()-1;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]>maxleft){
                    maxleft=height[l];
                }
                else{
                    water+=maxleft-height[l];
                    l++;
                }
            }else{
                if(height[r]>maxright){
                    maxright=height[r];
                }
                else{
                    water+=maxright-height[r];
                    r--;
                }
                
            }
        }
        return water;
        
    }
};