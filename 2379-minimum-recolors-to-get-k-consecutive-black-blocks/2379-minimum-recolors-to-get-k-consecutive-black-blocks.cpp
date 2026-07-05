class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int low=0;
        int n=blocks.size();
        int high=k-1;
        int res=INT_MAX;
        unordered_map<char,int> mp;
        for(int i=low;i<=high;i++)
        {
           if(blocks[i]=='W')
           {
            mp['W']++;
       
           }
        }
        while(high<n)
        {
          res=min(mp['W'],res);
          if(blocks[low]=='W')
          mp['W']--;
          low++;
          high++;
          if(high==n)
          break;
          if(blocks[high]=='W')
          mp['W']++;
         
        }
        return res;
    }
};