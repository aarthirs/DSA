// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
//   Reverse the Array
//   Print the elements of an array in reverse order.
//   Input: [1, 2, 3, 4] → Output: [4, 3, 2, 1]
    vector<int> arr={1,2,3,4};
    int n=arr.size()-1;
    vector<int> res;
    while (n>=0){
        res.push_back(arr[n]);
        n--;
    }
    for(int i: res){
        cout << i<<"\t";
    }
    return 0;
}
