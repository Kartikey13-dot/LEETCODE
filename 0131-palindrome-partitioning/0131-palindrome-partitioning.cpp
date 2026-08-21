class Solution {
public:
bool palindrome(string f)
{
    string s2=f;
    reverse(s2.begin(),s2.end());
    return s2==f;
}
void getparts(string s,vector<string>& temp,vector<vector<string>>& ans)
{
    if(s.size()==0)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        string partit=s.substr(0,i+1);
        if(palindrome(partit))
        {
            temp.push_back(partit);
            getparts(s.substr(i+1),temp,ans);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        getparts(s,temp,ans);
        return ans;
    }
};