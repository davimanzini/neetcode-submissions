class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int numZeros = 0;
        int prodWOzeros = 1;

        for(int i = 0; i < n; ++i){
            int curr = nums[i];
            if(curr == 0) numZeros++;
            else prodWOzeros *= curr;
        }

        vector<int> ans;

        for(int i = 0; i < n; ++i){
            int curr = nums[i];
            if(curr == 0){
                if(numZeros > 1) ans.push_back(0);
                else ans.push_back(prodWOzeros);
            }
            else{
                if(numZeros > 0) ans.push_back(0);
                else{
                    int val = prodWOzeros / curr;
                    ans.push_back(val);
                }
            }
        }
        return ans;
    }
};