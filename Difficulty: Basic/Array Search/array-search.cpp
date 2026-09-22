class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int idx = 0;
        
        find(arr, x, idx, n);
    }
    int find(vector<int>& arr, int x, int idx, int n){
        // base case 
        if (idx == n)
            return -1;
        
        if(arr[idx] == x) return idx;
        
        return find(arr, x, idx+1, n);
    }
};