class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int low=0;
        int k=p.size();
        int high=k-1;
        vector<int> need(26,0);
        vector<int> res;
        vector<int> window(26,0);
        if(p.size() > s.size())
    return {};
        for(int i=low;i<=high;i++)
        {
            char c=p[i];
            need[c-'a']++;
        }
        for(int j=low;j<=high;j++)
        {
            char ch=s[j];
            window[ch-'a']++;

        }
        while(high<s.size())
        {
            if(window==need)
            res.push_back(low);
            window[s[low]-'a']--;
            low++;
            high++;
            if(high==s.size())
            break;
            window[s[high]-'a']++;
        }
        return res;
    }
};