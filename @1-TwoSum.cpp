class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sol;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
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
