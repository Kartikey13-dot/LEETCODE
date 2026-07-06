class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        int low=0;
        int res=INT_MAX;
        unordered_map<int,int> mp;
        for(int high=0;high<n;high++)
        {
              mp[cards[high]]++;
              while(mp[cards[high]]==2)
              {
                int len=high-low+1;
                  res=min(res,len);
                mp[cards[low]]--;
                if (mp[cards[low]] == 0) {
                 mp.erase(cards[low]);}
                 low++;
                  
              }
        }
            if (res == INT_MAX)
            return -1;
            return res;
        
    }
};