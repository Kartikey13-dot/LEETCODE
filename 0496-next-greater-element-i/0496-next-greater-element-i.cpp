class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> res(n);
        stack<int> st;
        res[n-1]=-1;
        st.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty()&& st.top()<=nums2[i])
            st.pop();
            if(st.empty())
            res[i]=-1;
            else
            res[i]=st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)\
        {
           int s=nums1[i];
           for(int j=0;j<nums2.size();j++)
           {
            if(nums2[j]==s )
            ans.push_back(res[j]);
           }
        }
        return ans;
    }
};