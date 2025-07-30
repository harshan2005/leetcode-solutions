class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxnum=nums[0];
        int current=nums[0];
        for(int i=1;i<nums.size();i++){
            current=max(nums[i],current+nums[i]);
            maxnum=max(maxnum,current);
        }
        return maxnum;    
    }
};