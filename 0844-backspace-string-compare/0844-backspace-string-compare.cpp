class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        int n=s.size();
        int m=t.size();
        int i=0;
      
        int maxi=max(n,m);
       for(int i=0;i<maxi;i++)
        {
            if(i<n){
            if(s[i]=='#')
             {if (!st1.empty()){
            st1.pop();}}
            else
            st1.push(s[i]);}
            if(i<m){
           if(t[i]=='#')
            {if (!st2.empty()){
           st2.pop();}}
           else
           st2.push(t[i]);}
         
          
          
        }
        if(st1==st2)
        return true;
        else
        return false;
    }
};