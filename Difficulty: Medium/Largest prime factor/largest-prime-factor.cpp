class Solution {
  public:
    int largestPrimeFactor(int n) {
        
        int ans = 1;
        
        for(int i = 2; i <= n/i; i++){
            if(n % i  == 0){
                
                ans = i;
                
                while(n % i  == 0){
                    n /= i;
                }
                if(n == 1){
                    break;
                }
            }
         
        }
        if(n > 1){
            ans = n;
        }
        return ans;
    }
};