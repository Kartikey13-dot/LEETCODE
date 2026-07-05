class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> need(26,0);
        vector<int> window(26,0);
        int k=s1.size();
        int low=0;
        int high=k-1;
        bool res=false;
        if(s1.size()>s2.size())
        return false;
        for(int i=low;i<=high;i++)
        {
            char c=s1[i];
            need[c-'a']++;
        }
        for(int i=low;i<=high;i++)
        {
            char ch=s2[i];
            window[ch-'a']++;
        }
        while(high<s2.size())
        {
            if(need==window)
            res=true;
            window[s2[low]-'a']--;
            low++;
            high++;
            if(high==s2.size())
            break;
            window[s2[high]-'a']++;
        }
        return res;
    }
};