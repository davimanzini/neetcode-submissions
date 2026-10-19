class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int> maxEsq(n);
        vector<int> maxDir(n);

        int esqMax = 0;
        for(int i = 0; i < n; ++i){
            if(height[i] > esqMax){
                esqMax = height[i];
                maxEsq[i] = height[i];
            }
            else maxEsq[i] = esqMax;
        }

        int dirMax = 0;
        for(int i = n - 1; i >= 0; --i){
            if(height[i] > dirMax){
                dirMax = height[i];
                maxDir[i] = height[i];
            }
            else maxDir[i] = dirMax;
        }

        int qtdAgua = 0;
        for(int i = 0; i < n; ++i){
            int curr = min(maxEsq[i], maxDir[i]) - height[i];
            qtdAgua += curr;
        }
        return qtdAgua;
    }
};
