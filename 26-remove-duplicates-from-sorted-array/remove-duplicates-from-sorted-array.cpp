class Solution {
public:
    int removeDuplicates(vector<int>& nums) {       
        if(nums.empty()){
            return 0;
        }
        /* int n = nums.size();
        int cntr =1;
        int val = 0;
        int data = nums[0];
        if(n !=0){*/


        int i=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};