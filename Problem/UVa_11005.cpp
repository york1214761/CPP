#include <iostream>
#include <vector>
using namespace std;

int get_cost(int x, int base, const int price[]){
    if (x == 0){
        return price[0];
    }
    int c = 0;
    while (x > 0){
        c += price[x % base];
        x /= base;
    }
    return c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int price[36];
        for (int j = 0; j < 36; j++){
            cin >> price[j];
        }
        cout << (i == 1 ? "" : "\n") << "Case " << i << ":\n";
        int num;
        cin >> num;
        while (num--){
            int n;
            cin >> n;
            vector <int> cost(37, 0);
            int min = 2000000000;
            for (int base = 2; base <= 36; base++){
                cost[base] = get_cost(n, base, price);
                if (cost[base] < min){
                    min = cost[base];
                }
            }
            cout << "Cheapest base(s) for number " << n << ":";
            for (int k = 2; k < 37; k++){
                if (min == cost[k]){
                    cout << " " << k;
                }
            }
            cout << "\n";
        }
    }
}