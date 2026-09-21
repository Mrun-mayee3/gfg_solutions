class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());
        
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        
        return ans;
    }
};