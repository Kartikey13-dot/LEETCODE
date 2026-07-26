class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n=asteroids.size();
        stack<int> st;
        st.push(asteroids[0]);
        if (n == 0) return ans;

        for(int i=1;i<n;i++)
        {
            if(asteroids[i]>0)
            {
            st.push(asteroids[i]);
            continue;
            }
            
               while (!st.empty() && st.top() > 0 && st.top() < -asteroids[i])
                st.pop();
                if(!st.empty()&& st.top()>0 && st.top()==-(asteroids[i]))
                {st.pop();
                continue;}
                 if (!st.empty() && st.top() > 0) {
                // current asteroid is destroyed
                continue;
            }
        
                st.push(asteroids[i]);
            
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};