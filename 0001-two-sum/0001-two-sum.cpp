class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
int n = nums.size();

for(int i = 0; i < n; i++)
{
    mp[nums[i]] = i;
}

for(int j = 0; j < n; j++)
{
    int need=target - nums[j];
    if(mp.find(need) != mp.end() && mp[need]!=j)
    {
        return {j,mp[need]};

    }
}
return {};
    };
};