class Solution {
public:
void helper(vector<int>& candidates, int target,int sum,int start,vector<vector<int>>& ans,vector<int>& temp)
{
    if(sum > target)
    return;

    if(sum==target)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=start;i<candidates.size();i++)
    {
        sum=sum+candidates[i];
        temp.push_back({candidates[i]});
        helper(candidates,target,sum,i,ans,temp);
        sum=sum-candidates[i];
        temp.pop_back();
    }
    return ;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        int start=0;
        helper(candidates,target,sum,start,ans,temp);
         return ans;
    }
};