#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    bool sorted=true;
    vector<int> a(n);
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n-1; i++) {
       if (a[i]>a[i+1]) {
           sorted=false;
           break;
       }
    }
    if (sorted==true) {
        cout<<"Sorted"<<endl;
    }
    else {
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}