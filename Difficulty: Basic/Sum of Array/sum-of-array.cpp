class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int idx = n-1;
    
        return fun(arr, idx, n);
    }
    
    int fun(vector<int> & arr, int idx, int n){
        if(idx == -1){
            return 0;
        }

        return arr[idx] + fun(arr, idx-1, n);
    }
};