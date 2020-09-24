class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int start = 1;
        int sum = 0;
        while (start <= arr.size()) {
            for (int i = 0; i < arr.size(); i++) {
                if (i + start > arr.size()) {
                    break;
                }
                for (int j = 0; j < start; j++) {
                    sum += arr[i + j];
                }
            }
            start += 2;
        }
        return sum;
    }
};
