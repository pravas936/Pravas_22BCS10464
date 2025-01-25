class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int l=0,r=0,jumps=0;
        int farthest=0;
        int n=nums.size();
        while(r<=n-1){
            for(int i=l;i<=r;i++){
                farthest=max(i+nums[i],farthest);
                if(farthest>=n-1){ 
                    return jumps+1;
                }
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
};