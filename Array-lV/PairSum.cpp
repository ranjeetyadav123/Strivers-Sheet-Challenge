vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int i=0, j=i+1;
    vector<vector<int>> ans;
   for(i=0; i<arr.size();i++){
       for(j=i+1; j<arr.size(); j++){
        if(arr[i]+arr[j]==s){
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
           
        }
        
        }
        
    }
    sort(ans.begin(), ans.end());
    return ans;
}