class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ct=0;
        unordered_map<int,int>preMap;
        preMap[0]=1;
        int sum=0;
        int preSum=0;
        int mod;
        for(int i:nums){
            preSum+=i;
            mod=preSum%k;
            if(mod<0)
              mod+=k;
            if(preMap.find(mod)!=preMap.end()){
                ct+=preMap[mod];
                preMap[mod]+=1;
            }
            else{
                preMap[mod]=1;
            }
        }
        return ct;
    }
};
