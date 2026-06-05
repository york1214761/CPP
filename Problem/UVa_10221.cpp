#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const double pi = acos(-1.0);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double s, a;
    string temp;
    while (cin >> s >> a >> temp){
        double r = 6440.0 + s;
        double degree = a;
        if (temp == "min"){
            degree /= 60.0;
        }
        if (degree > 180.0){
            degree = 360.0 - degree;
        }
        double rad = degree * pi / 180.0;
        double arc = r * rad;
        double chord = 2 * r * sin(rad / 2.0);
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
}