class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=1;
        int right=n-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int ct=0;
            for(int i:nums)
            {
                if(i<=mid)
                  ct++;
            }
            if(ct>mid)
              right=mid;
            else
              left = mid+1;
        }
        return left;
    }
};
