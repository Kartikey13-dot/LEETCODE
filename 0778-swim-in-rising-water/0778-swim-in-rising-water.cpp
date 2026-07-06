class Solution {
public:
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
bool valid(int i,int j,int n,int m)
{
    if(i<0 || i>=n || j<0 || j>=m)
    return false;
    return true;
}
bool bfs(vector<vector<int>>& grid,int n,int m,int money)
{
    vector<vector<int>> vis(n,vector<int> (m,0));
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=1;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int row=p.first;
        int col=p.second;
        if(row==n-1 && col==m-1)
        return true;
        for(int k=0;k<4;k++)
        {
            int r=row+x[k];
            int c=col+y[k];
            if(valid(r,c,n,m)&& vis[r][c]==0 && money>=grid[r][c])
           { q.push({r,c});
            vis[r][c]=1;}
        }
    }
    return false;
}

    int swimInWater(vector<vector<int>>& grid) {
        
        int low=grid[0][0];
        int high=grid[0][0];
        int res=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                high=max(high,grid[i][j]);
            }
        }
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(bfs(grid,n,m,guess))
            {
                res=guess;
                high=guess-1;
            }
            else
            {
                low=guess+1;
            }
        }
        return res;

    }
};