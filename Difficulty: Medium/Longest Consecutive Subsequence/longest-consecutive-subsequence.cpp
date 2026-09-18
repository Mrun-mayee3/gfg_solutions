class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        
        if(arr.size() == 0) return 0;
        
        int longest = 1;
        unordered_set<int> st;
        
        for(int i = 0; i < arr.size(); i++){
            st.insert(arr[i]);
        }
        
        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int cnt = 1;
                int x = i;
                while(st.find(x + 1) != st.end()){
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};