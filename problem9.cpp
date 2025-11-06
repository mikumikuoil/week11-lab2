#include <vector>
#include <iostream>
using namespace std;
int main() {
    int r,c;
    cout<<"Enter the number of rows and columns of matrix:\n";
    cin>>r>>c;
    int arr[r][c];
    int arr2[r][c];
    int arr3[r][c];
    cout<<"Enter the elements of matrix 1:\n";
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of matrix 2:\n";
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<<"Matrix 3 - Sum of 1 and 2"<<endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}