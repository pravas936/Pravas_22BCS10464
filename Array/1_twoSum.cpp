class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                ans={i,mpp[rem]};
                return ans;
            } 
            mpp[nums[i]]=i;
        }
        return {};
    }
};