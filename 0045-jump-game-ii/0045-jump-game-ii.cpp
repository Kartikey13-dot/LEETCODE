class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int maxjump=0;
        int jump=0;
        int currentend;
        for(int i=0;i<n-1;i++)
        {
            
             maxjump=max(maxjump,i+nums[i]);
             if(i==currentend)
             {
                jump++;
                currentend=maxjump;
             }
        }
        return jump;
    }
};