class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    int ans;
    if(nums.size()==1)
    {
        return nums[0];
    }
    
    while(start<=end)
    {

        int mid=(start+end)/2;
        if (mid == 0) {
    return (nums[0] != nums[1]) ? nums[0] : nums[2];
}

if (mid == nums.size() - 1) {
    return (nums[mid] != nums[mid - 1]) ? nums[mid] : nums[mid - 2];
}
       if(mid > 0 && mid < nums.size()-1 &&
   nums[mid+1] != nums[mid] &&
   nums[mid-1] != nums[mid])
        {
            ans=nums[mid];
            break;
        }
        else if(mid > 0 && nums[mid-1] == nums[mid])
        {
            int left = (mid - 1) - start;
if (left % 2 == 0)
    start = mid + 1;
else
    end = mid - 2;
        }
        else if(mid < nums.size()-1 && nums[mid] == nums[mid+1])
        {
            int left = mid - start;
if (left % 2 == 0)
    start = mid + 2;
else
    end = mid - 1;
        }
       
    }
         return ans;

    };
};