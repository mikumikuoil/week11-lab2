#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    int unique=0;
    cout << "Enter numbers of numbers: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        bool isunique=true;
        for (int j = i+1; j < n; j++) {
            if (i!=j && v[i]==v[j]) {
                isunique=false;
                break;
            }
        }
        if (isunique) {
            unique++;
        }
    }
    cout<<"Unique=" << unique << endl;
}