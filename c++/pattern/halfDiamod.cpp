#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter the value:";
    cin>>n;
    for (int i=0;i<2*n-1;i++){
        int star = i+1 ;
        if (i>=n){
            star= 2*n-1 -i;
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
