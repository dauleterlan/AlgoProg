#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    double x,y,z;
    cin >> x >> y >> z; 
    double A  = 1 + y;
    double B = x + y / (x * x  + 4);
    double C = exp(-x - 2) + 1 / (x  * x + 4);
    double resA = A * (B / C);
    double A2 = 1 + cos(y - 2);
    double B2 = pow(x, 4)/ 2 +  pow(sin(z),2); 
    double resB = A2 / B2;
    printf("%.2f %.2f", resA, resB);
    return 0;
}

