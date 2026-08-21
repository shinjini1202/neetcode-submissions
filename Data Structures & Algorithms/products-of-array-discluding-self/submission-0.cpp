class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        int pre=1,post=1;
        for (int i=0;i<nums.size();i++){
            res[i]=pre;
            pre=nums[i]*pre;
        }
        for (int i=nums.size()-1;i>=0;i--){
            res[i]*=post;
            post*=nums[i];
        }
        return res;
    }
};
