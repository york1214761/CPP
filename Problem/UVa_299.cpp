#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    while (num--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int counts = 0;
        for (int p = 0; p < n; p++) {
            for (int q = n - 1; q > p; q--) {
                if (arr[q] < arr[q - 1]) {
                    swap(arr[q], arr[q - 1]);
                    counts += 1;
                }
            }
        }
        cout << "Optimal train swapping takes " << counts << " swaps." << endl;
    }
}