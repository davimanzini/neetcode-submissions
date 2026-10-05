class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans(2);

        for(int i = 0; i < n; ++i){
            int complement = target - nums[i];
            if(mp.count(complement)){
                ans[0] = mp[complement];
                ans[1] = i;
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};