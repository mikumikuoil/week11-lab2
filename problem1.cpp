#include <iostream>
#include <vector>
using namespace std;
int main() {
    int numcount;
    cout << "Enter number of digits: ";
    cin >> numcount;
    vector<int> v(numcount);
    cout << "Enter digits: ";
    for (int i = 0; i < numcount; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < numcount; i++) {
        cout << v[numcount-1-i] << " ";
    }
}