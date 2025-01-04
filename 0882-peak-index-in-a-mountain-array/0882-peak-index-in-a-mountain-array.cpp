class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {

        int n = A.size();
        int st= 1, end = n-2;

        while(st <= end){

             int mid = st + (end-st)/2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
                return mid;
            }

            else if (A[mid-1] < A[mid]){ // right part ma josu
                st = mid + 1;
            }
            else
                end = mid - 1;   // left ma jasu
        }
                return -1;
    }
};