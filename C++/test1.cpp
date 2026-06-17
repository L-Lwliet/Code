#include<iostream>
using namespace std;

int main() {

    int arr[10], i, N, j, p;

    cout << "Enter size of an array:";
    cin>>N;

    cout << "Enter array elements:";
    for (i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "All prime list:";

    for (i = 0; i < N; i++) {
        j = 2;
        p = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
