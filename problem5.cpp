#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter length of the vectors: ";
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    cout<<"Enter elements of 1st vector: ";
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<"Enter elements of 2nd vector: ";
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i]=a[i]+b[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<c[i]<<" ";
    }
}