class Solution {
public:
    int binarySearch(vector<int> &arr, int l, int r) {
        if (r >= l) { 
            int mid = l + (r - l) / 2; 

            if ((mid - 1) >= 0 && (mid + 1) < arr.size() && arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                 return mid;   
            } 
            
            if ((mid - 1) >= 0 && arr[mid - 1] > arr[mid]) {
                return binarySearch(arr, l, mid - 1);    
            }
            
            if ((mid + 1)  < arr.size()) {
                return binarySearch(arr, mid + 1, r);    
            }
        } 
        return -1;  //should never ever get here
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarySearch(arr, 0, arr.size() - 1);
    }
};