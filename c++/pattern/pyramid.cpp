#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter the value:";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
