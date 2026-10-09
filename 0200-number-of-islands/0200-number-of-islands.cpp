class Solution {
public:
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool valid(int r1,int c1,int n,int m)
{
  if(r1>=0 && c1>=0 && r1<n && c1<m)
  return true;
  else
  return false;
}
void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid,int n,int m)
{
    vis[row][col]=1;
    for(int k=0;k<4;k++)
    {
        int r=row+x[k];
        int c=col+y[k];
        if(valid(r,c,n,m) && grid[r][c]=='1'&& vis[r][c]==0)
        dfs(r,c,vis,grid,n,m);
    }
    return ;
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
         int res=0;
        for(int i=0;i<n;i++ )
        {
        for(int j=0;j<m;j++ )
        {
            if(vis[i][j]==0 && grid[i][j]=='1')
            {
                dfs(i,j,vis,grid,n,m);
                res++;
            }
        }
        }
        return res;
    }
};