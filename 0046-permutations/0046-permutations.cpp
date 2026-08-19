class Solution {
public:
 vector<vector<int>> perm(int idx,vector<int>& nums, vector<vector<int>>& ans)
{
    if(idx==nums.size())
    {
        ans.push_back({nums});
    }
    for(int i=idx;i<nums.size();i++)
    {
        swap(nums[idx],nums[i]);
        perm(idx+1,nums,ans);
        swap(nums[idx],nums[i]);
    }
       return ans;
}
    vector<vector<int>> permute(vector<int>& nums) {
        int idx=0;
        vector<vector<int>> ans;
        return perm(idx,nums,ans);
    }
};