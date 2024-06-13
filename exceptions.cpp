#include <iostream>
using namespace std;

int main() {
    int x = 23;
    int y = 7;
    double result = static_cast<double>(x) / y;
    cout << "result: " << result << endl;
    if (x < 0) {
        cerr << "Error: x must be non-negative" << endl;
    }
    return 0;
}