class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int s1=intervals[0][0];
        int e1=intervals[0][1];
        vector<vector<int>> mp;
        mp.push_back({s1,e1});
        for(int i=1;i<n;i++)
        {
             int s2=intervals[i][0];
             int e2=intervals[i][1];
             vector<int> last = mp.back();
int lastEnd = last[1];
             if(s2<lastEnd)
             {
                
                if(e2<lastEnd)
                {mp.pop_back();
                mp.push_back(intervals[i]);}
             }
             else
             mp.push_back(intervals[i]);
            
        }
        return intervals.size()-mp.size();
                               
    }
};