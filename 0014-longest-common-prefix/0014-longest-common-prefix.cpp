class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
            string s1=strs[0];
            string ans="";
            string res;
            int mini=INT_MAX;
            int m;
            string final="";
            if(strs.size()==1)
            return strs[0];
           
        for(int j=1;j<strs.size();j++)
        {
            string s2=strs[j];
              m=min(s1.size(),s2.size());
            for(int i=0;i<m;i++)
            { 
                if(s1[i]==s2[i])
                {
                   ans=ans+s1[i];
                }
                else
                break;
            }
            res=ans;
                int f=res.size();
                mini=min(mini,f);
                ans="";
        }
        for(int i=0;i<mini;i++)
        {
            final=final+s1[i];
        }
        return final;
        }
    };