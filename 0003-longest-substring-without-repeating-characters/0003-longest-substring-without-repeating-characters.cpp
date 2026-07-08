class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int n=s.size();
        unordered_map<int,int> mp;
        int ans=0;
        for(int high=0;high<n;high++)
        {
             mp[s[high]]++;
             while(mp[s[high]]>1)
             {
                mp[s[low]]--;
                low++;
             }
              ans=max(ans,high-low+1);
        }
        return ans;
    }
};