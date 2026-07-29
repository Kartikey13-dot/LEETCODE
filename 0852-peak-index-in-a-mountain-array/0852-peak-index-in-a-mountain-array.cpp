class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int res=-1;
        int guess;
        while(low<=high)
        {
           guess=(low+high)/2;
           if(arr[guess]<arr[guess+1])
           {
            low=guess+1;
           }
           else
           {
            res=guess;
            high=guess-1;
           }
        }
        return res;
    }
};