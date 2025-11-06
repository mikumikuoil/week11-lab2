#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    cout << "Enter numbers: ";
    int n;
    int even=0,odd=0;
    do {
        cin >> n;
        v.push_back(n);
        if (n%2==0) {
            even++;
        }
        else if (n%2==1) {
            odd++;
        }
    } while (n>=0);
    cout <<"Even="<< even << endl;
    cout <<"Odd="<<odd << endl;
}