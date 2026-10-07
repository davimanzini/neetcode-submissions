class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i = 0; i < n; ++i){
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>> queue;

        for(auto p : mp){
            auto item = make_pair(p.second, p. first);
            queue.push(item);
        }

        vector<int> ans;
        for(int i = 0; i < k; ++i){
            auto curr = queue.top();
            ans.push_back(curr.second);
            queue.pop();
        }
        return ans;
    }
};