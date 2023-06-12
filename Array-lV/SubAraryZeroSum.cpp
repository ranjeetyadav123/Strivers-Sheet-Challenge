class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mp;
        int sum=0;
        mp[0]=-1;
        
        int maxL=0;
        
        for(int i=0; i<n; i++){
            sum+=A[i];
            
            if(mp.find(sum)!=mp.end()){
                maxL=max(maxL,i-mp[sum]);
                continue;
            }
            mp[sum]=i;
        }
        return maxL;
    }
};
