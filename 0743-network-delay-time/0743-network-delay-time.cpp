class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> a(n+1);
        for(int i=0;i<times.size();i++)
        {
            vector<int> edge=times[i];
            int s=edge[0];
            int d=edge[1];
            int w=edge[2];
            a[s].push_back({d,w});
           
        }
     priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
        vector<int> dist(n+1,INT_MAX);
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty())
        {
            pair<int,int> p=pq.top();
            pq.pop();
            int d=p.first;
            int node=p.second;
            if(d>dist[node])
           continue;
           for(int i=0;i<a[node].size();i++)
           {
            int neigh=a[node][i].first;
            int wt=a[node][i].second;
            if(d+wt<dist[neigh])
            {
                dist[neigh]=d+wt;
                pq.push({d+wt,neigh});
            }
           }
        }
        int ans = 0;

for(int i=1;i<=n;i++)
{
    if(dist[i]==INT_MAX)
        return -1;
    ans=max(ans,dist[i]);
}

return ans;
    }
};