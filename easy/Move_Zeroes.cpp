class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stack<int>st;
        stack<int>stk;
        vector<int>zero;
        for(int i:nums){
            if(i==0){
                zero.push_back(i);
                continue;
            }
            st.push(i);
        }
        nums.clear();
        while(!st.empty()){
            stk.push(st.top());
            st.pop();
        }
        while(!stk.empty()){
            nums.push_back(stk.top());
            stk.pop();
        }
        for(int i:zero){
            nums.push_back(i);
        }
    }
};
