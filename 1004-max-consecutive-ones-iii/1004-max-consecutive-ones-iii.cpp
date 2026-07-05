class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        int a = 0;
        int res = 0;

        unordered_map<int,int> mp;

        int n = nums.size();
        int c = 0;

        while(right < n)
        {
            if(nums[right] == 0)
            {
                mp[a] = right;
                a++;
                c++;
            }

            while(c > k)
            {
                left = mp[a - c] + 1;
                c--;
            }

            int len = right - left + 1;
            res = max(res, len);

            right++;
        }

        return res;
    }
};