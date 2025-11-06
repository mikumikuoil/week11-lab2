#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> result;
    result.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            result.push_back(a[i]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        int num = result[i];
        cout << num << " ";
    }

    return 0;
}
