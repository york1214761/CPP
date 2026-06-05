#include <iostream>
using namespace std;

int main(){
    int lenth;
    while (cin >> lenth) {
        if (lenth == 1) {
            int x;
            cin >> x;
            cout << "Jolly" << endl;
            continue;
        }
        else {
            int a[3000];
            int b[3000];
            for (int i = 0; i < lenth; i++) {
                cin >> a[i];
            }
            for (int j = 0; j < lenth - 1; j++) {
                b[j] = abs(a[j] - a[j + 1]);
            }
            bool find = false;
            for (int m = 1; m < lenth; m++) {
                find = false;
                for (int n = 0; n < lenth - 1; n++) {
                    if (m == b[n]) {
                        find = true;
                        break;
                    }
                }
                if (find == false) {
                    cout << "Not jolly" << endl;
                    break;
                }
            }
            if (find == true) {
                cout << "Jolly" << endl;
            }
        }
    }
}