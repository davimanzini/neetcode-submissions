class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        if(nums[0] > 0) return ans;

        int k = 0;
        while(k < n - 2 && nums[k] <= 0){
            
            if(k != 0 && nums[k] == nums[k - 1]){
                k++;
                continue;
            }

            int target = -nums[k];
            int i = k + 1;
            int j = n - 1;

            while(i < j){
                if(i != k + 1 && j != n - 1){
                    if(nums[i] == nums[i - 1] && nums[j] == nums[j + 1]){
                        i++;
                        j--;
                        continue;
                    }
                }
                int sum = nums[i] + nums[j];
                if(sum == target){
                    ans.push_back({nums[k], nums[i], nums[j]});
                    i++;
                    j--;
                }
                else if(sum < target)i++;
                else j--;
            }
            k++;
            i = k + 1;
            j = n - 1;
        }
        return ans;
    }
};