class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt = 1;
        int max_cnt = 1;
        
        for(int r = 1; r < arr.size(); r++){
            if(arr[r] == arr[r-1]){
                cnt++;
                
            }
            else{
                cnt = 1;
            }
                max_cnt = max(max_cnt, cnt);
        }
        return max_cnt;
    }
};