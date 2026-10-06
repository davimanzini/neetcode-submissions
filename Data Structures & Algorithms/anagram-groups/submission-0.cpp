class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < n; ++i){
            string aux = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(aux);
        }

        vector<vector<string>> ans;

        for(auto p : mp){
            ans.push_back(p.second);
        }

        return ans;
    }
};