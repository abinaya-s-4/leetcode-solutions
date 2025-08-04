#include <algorithm>
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int left=0,maxfruits=0,right;
        for(right=0;right<fruits.size();right++){
            count[fruits[right]]++;
        
        while(count.size()>2){
            count[fruits[left]]--;
            if(count[fruits[left]]==0){
                count.erase(fruits[left]);
            }
            left++;
        }
        maxfruits=max(maxfruits,right - left +1);
        
    }
    return maxfruits;
    }
};