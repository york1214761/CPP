#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int c = 1;
    while (cin >> n){
        vector <int> bi(n);
        bool ok = true;
        for (int i = 0; i < n; i++){
            cin >> bi[i];
            if (bi[i] < 1){
                ok = false;
            }
            if (i > 1 && bi[i] <= bi[i - 1]){
                ok = false;
            }
        }
        if (ok){
            bool have_sum[20001] = {false};
            for (int i = 0; i < n; i++){
                for (int j = i; j < n; j++){
                    int sum = bi[i] + bi[j];
                    if (have_sum[sum] == false){
                        have_sum[sum] = true;
                    }
                    else{
                        ok = false;
                    }
                }
            }
        }
        cout << "Case #" << c << ": ";
        if (ok){
            cout << "It is a B2-Sequence.\n";
        }
        else{
            cout << "It is not a B2-Sequence.\n";
        }
        cout << "\n";
        c += 1;
    }
}