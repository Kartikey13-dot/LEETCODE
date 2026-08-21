class Solution {
public:
void fun(vector<int>& candidates,int n,int idx,vector<int>& diary,vector<vector<int>>& ans,int target,int sum)
{
        if(sum==target )
    {
        ans.push_back(diary);
        return;
    }
    if(idx == n || sum > target)
            return;
    //don't take
    fun(candidates,n,idx+1,diary,ans,target,sum);
//take
          sum+=candidates[idx];
        diary.push_back(candidates[idx]);
        fun(candidates,n,idx,diary,ans,target,sum);
        diary.pop_back();
        sum-=candidates[idx];
        
        

    return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
        vector<int> diary;
        int n=candidates.size();
        int sum=0;

        fun(candidates,n,0,diary,ans,target,sum);

        return ans;
    }
};