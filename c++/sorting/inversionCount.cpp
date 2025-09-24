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
/*

mergesort:
Each single element (base case) → returns 0.

But when merging two singles, we may find inversions.
That’s why [3,2] returns 1 in the parent call, not because the base case was non-zero, but because the merge step found 1.

merge:

copy  temp to arr
arr = [2, 4, 1, 3, 5]
Suppose we are merging [2,4] and [1,3].

While merging, we build temp = [1,2,3,4].

But this sorted result lives in temp, not in arr.

To keep arr sorted for future recursive merges, we copy temp back into the correct slice of arr.

k=1 → arr[1]=temp[0]
k=2 → arr[2]=temp[1]
k=3 → arr[3]=temp[2]
*/
