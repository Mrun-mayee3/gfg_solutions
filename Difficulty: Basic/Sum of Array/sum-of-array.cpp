class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int total = 0;
        
        for(int i = 0; i < arr.size(); i++){
            total+= arr[i];
        }
        return total;
    }
};