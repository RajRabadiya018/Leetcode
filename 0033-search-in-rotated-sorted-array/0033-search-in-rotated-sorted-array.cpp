class Solution {
public:
    int search(vector<int>& A, int tar) {
        int n = A.size();
        int st = 0;
        int end = n-1;

        while(st <= end){
          int mid = st + (end-st)/2;
          if(A[mid] == tar)
          return mid;

          if(A[st] <= A[mid]){  // left sorted
                if(A[st] <= tar && tar <= A[mid]){  // left
                        end = mid - 1;
                } 
                else
                        st = mid + 1;
          } 

          else {  // right sorted
                if(A[mid] <= tar && tar <= A[end]){  // left
                      st = mid + 1;  
                } 
                else
                    end = mid - 1;
          } 

          }

    
        return -1;
    }
};