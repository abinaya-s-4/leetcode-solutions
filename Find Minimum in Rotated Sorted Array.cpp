class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
};