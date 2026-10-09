class Solution {
public:

    string encode(vector<string>& strs) {
        
        int n = strs.size();
        string encoded = "";
        for(int i = 0; i < n; ++i){
            int currSize = strs[i].length();
            encoded += to_string(currSize) + '#';
            encoded += strs[i];;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        
        vector<string> ans;
        int n = s.length();

    
        int currPos = 0;

        while(currPos < n){
            
            string currSizeStr = "";
            while(s[currPos] != '#'){
                currSizeStr += s[currPos];
                currPos++;
            }

            int currSizeInt = stoi(currSizeStr);

            string curr = s.substr(currPos + 1, currSizeInt);
            ans.push_back(curr);
            currPos += currSizeInt + 1;
        }
        
        return ans;
    }
};