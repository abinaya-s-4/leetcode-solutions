class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_set<int> result;
        for(int num : nums) {
            freq[num]++;
            if(freq[num]>1) result.insert(num);}
        return vector<int> (result.begin(),result.end());
        
    }
};