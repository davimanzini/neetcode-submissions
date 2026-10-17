class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        int maxSize = 0;

        while(i < j){
            int currSize = (j - i) * min(heights[i], heights[j]);
            if(currSize > maxSize) maxSize = currSize;

            if(heights[i] <= heights[j]) i++;
            else j--;
        }
        return maxSize;
    }
};