class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> st;
        string d="";
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {st.push(s[i]);
            continue;}
            if(s[i]==st.top())
           { st.pop();
            continue;}
            else
            st.push(s[i]);
        }
        while(!st.empty())
        {
            d += st.top();
            st.pop();
        }
        reverse(d.begin(), d.end());
         return d;
    }
};