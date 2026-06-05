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
        sort(arr, arr + n);
        int sum = 0, mid = arr[(n - 1) / 2];
        for (int j = 0; j < n; j++) {
            sum += abs(arr[j] - mid);
        }
        cout << sum << endl;
    }
}