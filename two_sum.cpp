#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for (int i =0;i<nums.size();i++){
            int need = target - nums[i];
            if (seen.count(need)){
                return {seen[need],i};
            } seen[nums[i]] =i; //Store Current Number and Index
        }
    return {};   
    }
};