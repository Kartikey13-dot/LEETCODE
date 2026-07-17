class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n,0);
        vector<int> suffix(n,0);

        int i = 1;
        int j = n - 2;

        while(i < n && j >= 0)
        {
            prefix[i] = prefix[i-1] + nums[i-1];

            suffix[j] = suffix[j+1] + nums[j+1];

            i++;
            j--;
        }

        for(int k=0; k<n; k++)
        {
            if(prefix[k] == suffix[k])
            {
                return k;
            }
        }

        return -1;
    }
};