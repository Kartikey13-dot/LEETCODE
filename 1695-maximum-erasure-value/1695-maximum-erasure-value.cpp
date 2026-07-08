class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0;
        int low=0;
        int ans=0;
        unordered_map<int,int> mp;
        for(int high=0;high<nums.size();high++)
        {
            mp[nums[high]]++;
            sum=sum+nums[high];
            while(mp[nums[high]]>1)
            {
                sum=sum-nums[low];
                mp[nums[low]]--;
                low++;
            }
            ans=max(ans,sum);

        }
        return ans;
    }
};