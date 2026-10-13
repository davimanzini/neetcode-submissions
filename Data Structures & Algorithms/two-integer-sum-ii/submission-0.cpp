#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        vector<int> ans(2);

        while(i < j){
            int currSum = numbers[i] + numbers[j];
            if(currSum == target){
                ans[0] = i + 1;
                ans[1] = j + 1;
                break;
            }
            else if(currSum < target) i++;
            else j--;
        }
        return ans;
    }
};