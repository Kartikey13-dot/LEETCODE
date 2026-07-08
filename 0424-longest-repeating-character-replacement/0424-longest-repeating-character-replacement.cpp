class Solution {
public:
    int characterReplacement(string s, int k) {
        int count=0;
        int low=0;
        int ans=INT_MIN;
        int maxf=0;
        unordered_map<char,int> mp;
        for(int high = 0; high < s.size(); high++)
{
    mp[s[high]]++;                      
    maxf = max(maxf, mp[s[high]]);    

    while((high-low+1)-maxf > k)
    {
        mp[s[low]]--;                   
        low++;
    }

    ans = max(ans, high-low+1);
}
return ans;
    }
};