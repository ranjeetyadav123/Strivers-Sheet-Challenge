class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    int sum=0;
    int maxi=INT_MIN;
    if(nums.size()==1)
        return nums[0];
    for(auto x:nums){
        sum +=x;
        maxi=max(maxi,sum);
         if(sum<0) sum=0;
    }
    return maxi;
    }
};
