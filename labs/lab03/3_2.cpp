#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    double x,y,z;
    cin >> x >> y >> z; 
    double a = (1+y)*((x+y)/(pow(x,2)+4))/(exp(-x-2))+1/(pow(x,2)+4);
    return 0;
}

