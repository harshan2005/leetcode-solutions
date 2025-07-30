class Solution {
public:
    int search(vector<int>& nums, int target) {
        int before=0,after=nums.size()-1;
            while(before<=after){
                int index=before+(after-before)/2;
                if(nums[index]==target){
                    return index;
                }
                else if(nums[index]<target){
                    before=index+1;
                }
                else{
                    after=index-1;
                }
            }
            return -1;
        }
       
};