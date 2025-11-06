#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> a(n);
    int max=0;
    int maxatindex=0;
    for (int i = 1; i < n; i++) {
        cin>>a[i];
        if (a[i]>max) {
            max=a[i];
            maxatindex=i;
        }
    }
    cout<<"index="<<maxatindex<<endl;
}