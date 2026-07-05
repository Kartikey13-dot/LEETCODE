class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        int n = nums.size();

        long long sum = 0;
        long long res = 0;

        // Build the first window
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            mp[nums[i]]++;
        }

        int low = 0;
        int high = k - 1;
if(mp.size() == k)
                res = max(res, sum);
while(high < n)
{
    if(mp.size() == k)
        res = max(res, sum);

    sum -= nums[low];
    mp[nums[low]]--;
    if(mp[nums[low]] == 0)
        mp.erase(nums[low]);

    low++;
    high++;

    if(high == n)
        break;

    sum += nums[high];
    mp[nums[high]]++;
}

        return res;
    }
};