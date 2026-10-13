class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());
        
        int maxSeq = 0;
        int currSeq = 1;

        for(int i = 0; i < n; ++i){
            
            if(i == 0 || nums[i] == nums[i - 1]) continue;

            if(nums[i] == nums[i - 1] + 1){
                currSeq++;
            }
            else{
                if(currSeq > maxSeq) maxSeq = currSeq;
                currSeq = 1;
            }
        }
        return max(maxSeq, currSeq);
    }
};