#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows for square matrix: ";
    cin>>n;
    bool isMagicSquare = true;
    int arr[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int MagicSquareNumber=0;
    for(int i=0;i<n;i++) {
        MagicSquareNumber+=arr[0][i];
    }
    for(int i=0;i<n;i++) {
        int rowwise=0;
        for(int j=0;j<n;j++) {
            rowwise+=arr[i][j];
        }
        if(rowwise!=MagicSquareNumber) {
            isMagicSquare=false;
        }
    }
    for(int i=0;i<n;i++) {
        int columnwise=0;
        for(int j=0;j<n;j++) {
            columnwise+=arr[j][i];
        }
        if(columnwise!=MagicSquareNumber) {
            isMagicSquare=false;
        }
    }
    int diag1 = 0;
    for (int i = 0; i < n; i++) {
        diag1 += arr[i][i];
    }
    if (diag1 != MagicSquareNumber) {
        isMagicSquare = false;
    }
    int diag2 = 0;
    for (int i = 0; i < n; i++) {
        diag2 += arr[i][n - i - 1];
    }
    if (diag2 != MagicSquareNumber) {
        isMagicSquare = false;
    }
    if (isMagicSquare)
        cout << "It is magic square" << endl;
    else
        cout << "It is not magic square" << endl;

    return 0;
}