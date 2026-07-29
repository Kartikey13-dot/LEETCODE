class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int res = 0;
         int s=nums[n-1];
        while (low <= high) {
           int guess=(low+high)/2;
           if(guess>0&&nums[guess]<nums[guess-1])
           {res=guess;
           break;}
           else if(guess>0&&nums[guess]>nums[guess-1]&& nums[guess]<s)
           high=guess-1;
            else
          low=guess+1;
        }
        

        return nums[res];
    }
};