#include <iostream>
#include <vector>
using namespace std;
int main() {
    int numc;
    cout << "Enter amount of numbers: ";
    cin >> numc;
    vector<int> v(numc);
    cout << "Enter numbers: ";
    for (int i = 0; i < numc; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < numc; i++) {
        if (v[i]%2 == 0) {
            cout << v[i]/2 << " ";
        }
        else {
            cout << v[i]*2 << " ";
        }
    }

}