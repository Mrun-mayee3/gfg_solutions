class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        // merge sort to break arr
        int start = 0;
        int end = n-1;
        
        
        return merge_sort(arr, start, end);
    }
    int merge_sort(vector<int>&arr, int start, int end){
        int cnt = 0;
        if(start >= end)
            return 0;
            
        int mid = start + (end - start)/2;
        cnt += merge_sort(arr, start, mid);
        cnt += merge_sort(arr, mid+1, end);
        
        // divide hogaya abb sort and merge
        cnt += merge(arr, start, mid, end);
        
        return cnt;
    }
    
    
    int merge(vector<int>&arr, int start, int mid, int end){
        int l = start;
        int r= mid+1;
        vector<int> temp;
        int cnt = 0;
        
        while(l <= mid && r <= end){
            if(arr[l] > arr[r]){
            temp.push_back(arr[r]);
            cnt += mid - l + 1;
            r++;
        }
        else{
            temp.push_back(arr[l]);
            l++;
            }
        }
        
        // for remaining elements from either array
        while(r <= end){
            temp.push_back(arr[r]);
            r++;
        }
        while(l <= mid){
            temp.push_back(arr[l]);
            l++;
        }
        
        // temp ko wapas arr me store 
        int i = start;
        while(i <= end){
            arr[i] = temp[i - start];
            i++;
        }
        return cnt;
    }
    
    
    
};