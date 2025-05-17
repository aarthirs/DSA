#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    cin >> a;
    cin>>b;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i=a;i<=b;i++){
        if (i<=9){
            cout<<arr[i]<<endl;
        }
        else if(i%2==0){
            cout<< "even \n";
        }
        else{
            cout<< "odd \n";
        }
    }
    return 0;
}
