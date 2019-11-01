class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sol = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                sol = nums[i]+nums[j]
                
                if (sol == target)
                {
                    return [i, j];
                }   
                    
            }
        }           
    }
};
