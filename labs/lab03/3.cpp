#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    double x,y,z;
    cin >> x >> y >> z; 
    double A  = 1 + y;
    double B = x + y / (x * x  + 4);
    double C = exp(-x - 2) + 1 / (x  * x + 4);
    double res = A * (B / C);
    cout << res;
    return 0;
}

