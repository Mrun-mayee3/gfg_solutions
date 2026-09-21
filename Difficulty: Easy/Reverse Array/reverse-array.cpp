class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int idx = 0;
        int n = arr.size();
        return fun(arr, idx, n);
        
    }
    
   void fun(vector<int> &arr, int idx, int n){
        
        if(idx >= n/2)
            return;
        
        swap(arr[idx], arr[n- idx -1]);
        fun(arr, idx + 1, n);
    }
};