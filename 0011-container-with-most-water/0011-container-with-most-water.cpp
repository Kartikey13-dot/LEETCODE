class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int h;
        int l;
        int area;
        int ans=INT_MIN;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                l=height[left];
                h=right-left;
                area=l*h;
                ans=max(ans,area);
                left++;
            }
            else if(height[left]>=height[right])
            {
            l=height[right];
            h=right-left;
            area=l*h;
            ans=max(ans,area);
            right--;
            }
        }
        return ans;
    }
};