class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
           st.insert(nums[i]);
        nums.clear();
        for(auto i:st)
          nums.push_back(i);
        int k=nums.size();
        return k;
    }
};
