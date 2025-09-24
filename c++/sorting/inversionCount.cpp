class Inversion {
public:
     int merge(vector<int>& arr, int start, int mid, int end) {
        vector<int> temp;
        int i = start, j = mid + 1;
        int count = 0;

        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                count += (mid - i + 1); // all remaining elements in left half are greater
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= end) temp.push_back(arr[j++]);

        // copy back into arr
        for (int k = start; k <= end; k++) {
            arr[k] = temp[k - start];
        }

        return count;
    }

    int mergeSort(vector<int> &arr, int low, int high) {
        int cnt = 0;
        if (low >= high) return cnt;
        int mid = (low + high) / 2 ;
        cnt += mergeSort(arr, low, mid); 
        cnt += mergeSort(arr, mid + 1, high); 
        cnt += merge(arr, low, mid, high); 
        return cnt;
    }
    int count(vector<int> input) {
        return mergeSort(input, 0, input.size() - 1);
    }
};
