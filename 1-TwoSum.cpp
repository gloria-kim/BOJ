class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sol;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) { //why i+1: 
                sol = nums[i]+nums[j];        
                if (sol == target) {
                    vector<int> result{i,j};
                    return result;
                }          
            }
        }
        return vector<int>{0,0};
    }
};
