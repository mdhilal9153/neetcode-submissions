class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        int prod=1;
        int zeroCount = 0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] != 0) prod*=nums[i];
            else zeroCount++;
        }
        for(int i=0;i<nums.size();i++){
            if (zeroCount > 1) ans.push_back(0);
            else if (zeroCount == 1) {
                ans.push_back(nums[i] == 0 ? prod : 0);
            }
            else{
                ans.push_back(prod/nums[i]);
            }
            
        }

        return ans;
    }
};