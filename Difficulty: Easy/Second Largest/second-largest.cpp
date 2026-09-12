class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        for(int i = n - 1; i > 0; i--){
            if(arr[i-1] != arr[i]){
                return arr[i-1];
            }
            
        }
        return -1;
    }
};