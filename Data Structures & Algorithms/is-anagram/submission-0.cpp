class Solution {
public:
    bool isAnagram(string s, string t) {

        int sLength = s.length();
        int tLength = t.length();
        if(sLength != tLength) return false;

        unordered_map<char, pair<int, int>> mp;

        for(int i = 0; i < sLength; ++i){
            mp[s[i]].first++;
            mp[t[i]].second++;
        }
        
        for(auto p : mp){
            if(p.second.first != p.second.second) return false;
        }
        return true;
    }
};