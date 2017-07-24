#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i=4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;
    
    cin >> i2;
    cin >> d2;
    cin >> s2;
    
    int j = i+i2;
    double p=d+d2; 
    cout << j;
    cout << "";
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout << p;
    cout << "";
    cout << s;
    cout << s2;

    return 0;

  }
